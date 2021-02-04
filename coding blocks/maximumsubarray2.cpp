#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   int currentsum=0;
   int maxsum=0;
   int left=-1;
   int right=-1;
   cin>>n;
   int a[1000];
   int csum[1000]={0};
   cin>>a[0];
   csum[0]=a[0];
   for(int i=1;i<n;i++){
       cin>>a[i];
       csum[i]=csum[i-1]+a[i];
   }
   //generating all the subarrays
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           currentsum=0;
           currentsum=csum[j]-csum[i-1];
           if(currentsum>maxsum){
               maxsum=currentsum;
               left=i;
               right=j;
           }
       }
   }
   cout<<maxsum<<endl;
   for(int i=left;i<=right;i++){
       cout<<a[i]<<" ";
   }
   return 0;
}

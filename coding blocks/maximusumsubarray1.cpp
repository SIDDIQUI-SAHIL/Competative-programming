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
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   //generating all the subarrays
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           currentsum=0;
           for(int k=i;k<=j;k++){
               currentsum+=a[k];
           }
           if(currentsum>maxsum){
               maxsum=currentsum;
               left=i;
               right=j;
           }
       }
   }
   cout<<maxsum<<endl;
   for(int i=left;i<right;i++){
       cout<<a[i]<<" ";
   }
   return 0;
}

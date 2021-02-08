#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,endindex=0,startindex=0;
   cin>>n;
   int a[1000],currMax; 
    int globalMax;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   currMax=a[0];
   globalMax=a[0];
  //kadane's algorithm to find maximum subarray sum
   for(int i=1;i<n;i++){
       currMax=max(currMax+a[i],a[i]);
       if(currMax>globalMax){
           globalMax=currMax;
           endindex=i;
       }
   }
   //to find start index of the sub array
   startindex=endindex;
   int temp=globalMax;
   while(startindex!=0){
       globalMax=globalMax-a[startindex];
       if(globalMax==0){
           break;
       }
       startindex--;
   }
   cout<<temp<<endl;
   for(int i=startindex;i<=endindex;i++){
       cout<<a[i]<<" ";
   }
   return 0;
}

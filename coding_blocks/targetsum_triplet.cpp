#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    sort(a,a+n);
    int left,right,i;
    for(i=0;i<n;i++){
        left=i+1;
        right=n-1;
        while(left<right){
            int sum=(a[left]+a[right])+a[i];
            if(sum==target){
                cout<<a[i]<<", "<<a[left]<<" and "<<a[right]<<endl;
                left++;
                right--;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
    }
    return 0;
}

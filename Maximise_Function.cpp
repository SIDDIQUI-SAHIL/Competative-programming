#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int test;
    cin>>test;
    while(test!=0){
        long long int  n;
        cin>>n;
        long long int a[n];
        long long int mi=INT_MAX;
        long long int ma=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>ma){
                ma=a[i];
            }
            if(a[i]<mi){
                mi=a[i];
            }
        }
        long long int ans=ma-mi;
        ans*=2;
        test--;
        cout<<ans<<endl;
    }
    return 0;
}
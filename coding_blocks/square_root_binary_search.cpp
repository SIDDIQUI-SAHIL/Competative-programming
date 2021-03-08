#include <bits/stdc++.h>
using namespace std;
float square_ro(int n,int p){
    float ans=-1;
    int s=0;
    int e=n;
    int mid;
    //calculating integer part of square root
    while(s<=e){
        mid=(s+e)>>1;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    //calculating float part of suqre root
    float inc=0.1;
    for(int times=1;times<=p;times++){
        while(ans*ans<=n){
            ans=ans+inc;
        }
        //overshot the value
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<square_ro(n,p);
    return 0;
}

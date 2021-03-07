#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a<b;
}
int main() {
    int t;
    cin>>t;
    while(t!=0){
        int n;
        int a[1000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m=*max_element(a,a+n);
        int first=a[0];
        if(first==m){
            next_permutation(a,a+n,compare);
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            next_permutation(a,a+n);
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            
        }
        t--;
        cout<<endl;
    }
    return 0;
}

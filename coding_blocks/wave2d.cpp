#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000][1000]={0};
    int m,n;
    cin>>n>>m;
    int val=1;
    for(int row=0;row<=n-1;row++){
        for(int col=0;col<=m-1;col++){
            a[row][col]=val;
            val=val+1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int col=0;col<m;col++){
        //if col is even
        if(col%2==0){
            for(int row=0;row<=n-1;row++){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
        //if col is odd
        else{
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
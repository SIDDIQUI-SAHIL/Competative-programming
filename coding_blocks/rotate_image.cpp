#include<bits/stdc++.h>
using namespace std;
void rotate_stl(int a[][1000],int n){
    //reverse each row single hadedly
    for(int i=0;i<n;i++){
        reverse(a[i],a[i]+n);
    }
    //swap upper triangle with lower triange ingnoring diagonal
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[1000][1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    rotate_stl(a,n);
    return 0;
}
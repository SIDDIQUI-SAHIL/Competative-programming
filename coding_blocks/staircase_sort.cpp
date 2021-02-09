#include<bits/stdc++.h>
using namespace std;
//find an element in a 2d array which is row and column wise sorted
void staircase(int a[][1000],int n,int key){
    int i=0,res=0;
    int j=n-1;
    while(res!=key && j>=0){
        if(a[i][j]==key){
            res=key;
        }
        else if(a[i][j]<key){
            i++;
        }
        else if(a[i][j]>key){
            j--;
        }
    }
    if(res==key){
        cout<<"Found"<<endl;
        cout<<i<< "row"<<" "<<j<< "column"<<endl;
    }
    else{
        cout<<"not found";
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
    int key;
    cin>>key;
    staircase(a,n,key);
    return 0;
}
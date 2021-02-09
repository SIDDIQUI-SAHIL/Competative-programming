#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int x=gcd(n1,n2);
    cout<<x;
    cout<<endl;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int wid=0;
    double bal;
    cin>>wid;
    cin>>bal;
    if((wid+0.50)<=bal && (wid%5)==0){
        bal=bal-(wid+0.50);
        cout<<fixed<<setprecision(2)<<bal;
    }
    else{
        cout<<fixed<<setprecision(2)<<bal;
    }
    return 0;
}
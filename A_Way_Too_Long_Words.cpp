#include <iostream>

using namespace std;

int main(){
    string str;
    int n=0,t=0;
    cin>>t;
    while(t!=0){
        cin>>str;
        n=str.length();
        if(n>10){
            cout<<str[0]<<n-2<<str[n-1]<<endl; 
        }
        else{
            cout<<str<<endl;
        }
        t--;
    }
    return 0;
}
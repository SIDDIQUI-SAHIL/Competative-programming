#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    string sl;
    string temp="";
    char c;
    char dot='.';
    int n=0;
    cin>>sl;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    n=sl.length();
    for(int i=0;i<n;i++){
        if(sl[i]=='a' || sl[i]=='e' || sl[i]=='i' || sl[i]=='o' || sl[i]=='u' || sl[i]=='y'){
            continue;
        }
        c=sl[i];
        temp=temp+dot+c;
    }
    cout<<temp; 
    return 0;
}
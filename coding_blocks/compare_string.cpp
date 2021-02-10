#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main(){
    int n;
    string s[100];
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    for(string c:s){
        cout<<c<<endl;
    }
    return 0;
}
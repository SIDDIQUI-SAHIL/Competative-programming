#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int len=str.length();
    int i=0;
    int n,m;
    int next=1;
    while(str[i]!='\0'){
        cout<<str[i];
        n=(int)str[i];
        m=(int)str[next];
        if(next<str.length()){
            cout<<m-n;
        }
        i++;
        next++;
    }
    return 0;
}

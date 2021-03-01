#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int max=0;
    char result;
    int count[256]={0};
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++){
        count[str[i]]++;
        if(max<count[str[i]]){
            max=count[str[i]];
            result=str[i];
        }
    }
    cout<<result<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void removed(char a[]){
    int prev=0;
    for(int current=0;current<strlen(a);current++){
        if(a[current]!=a[prev]){
            prev++;
            a[prev]=a[current];
        }
    }
    a[prev+1]='\0';
    return;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    removed(a);
    cout<<a;
    return 0;
}
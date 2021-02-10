#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    char largets[100];
    int n,l,largets_len;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a, 1000);
        l=strlen(a);
        if(l>largets_len){
            largets_len=l;
            strcpy(largets,a);
        }
    }
    cout<< largets<< " "<<largets_len<<endl;
    return 0;
}
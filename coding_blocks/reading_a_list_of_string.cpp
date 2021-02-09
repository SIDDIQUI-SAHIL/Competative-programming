//reading a list of string_ and storing it in a 2d character array;
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100][100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a[i], 1000);
    }
    cout<<"    "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
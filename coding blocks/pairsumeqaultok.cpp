#include <bits/stdc++.h>
using namespace std;
int main() {
    //Given sorted array find the pair (2) of elements whose sum is eual to k
    int n,key;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    int i=0;
    int j=n-1;
    while(i<j){
        int currentsum=a[i]+a[j];
        if(currentsum>key){
            j--;
        }
        else if(currentsum<key){
            i++;
        }
        else if(currentsum==key){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char a[]){
    int j=strlen(a)-1;
    int i=0;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    if(isPalindrome(a)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
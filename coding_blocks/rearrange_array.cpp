// Given an array of numbers,
// program to arrange the numbers
// to form the largest number
/////ex: 54 546 548 60
//op: 6054854654
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1 : 0;
}
void printLargest(string arr[],int n)
{
    sort(arr, arr+n, myCompare);
    for (int i = 0; i < n; i++)
        cout << arr[i];
}
int main()
{
    int t,n;
    cin>>t;
    string arr[1000];
    while(t!=0){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 
        printLargest(arr,n);
		cout<<endl;
        t--;
    }
    return 0;
}

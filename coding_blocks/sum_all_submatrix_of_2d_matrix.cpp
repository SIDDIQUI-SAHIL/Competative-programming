#include<bits/stdc++.h>
using namespace std; 
  
// Function to find the sum of all 
// possible submatrices of a given Matrix 
int matrixSum(int arr[][1000],int n,int m) 
{ 
    // Variable to store 
    // the required sum 
    int sum = 0; 
  
    // Nested loop to find the number  
    // of submatrices, each number belongs to 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) { 
  
            // Number of ways to choose 
            // from top-left elements 
            int top_left = (i + 1) * (j + 1); 
  
            // Number of ways to choose 
            // from bottom-right elements 
            int bottom_right = (n - i) * (m - j); 
            sum += ((top_left * bottom_right) * arr[i][j]); 
        } 
  
    return sum; 
} 
  
// Driver Code 
int main() 
{ 
    int n,m;
    cin>>n>>m;
    int arr[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout << matrixSum(arr,n,m); 
  
    return 0; 
} 

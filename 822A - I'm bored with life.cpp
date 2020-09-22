//https://codeforces.com/problemset/problem/822/A
//822A - I'm bored with life
#include <bits/stdc++.h> 
using namespace std; 
int factorial(int n) { 
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n; 
}  
int gcdOfFactorial(int arr[], int n) { 
    int minm = arr[0]; 
    for (int i = 1; i < n; i++) 
        minm = minm > arr[i] ? arr[i] : minm; 
    return factorial(minm); 
} 
  
int main() { 
    int arr[2];
    cin>>arr[0]>>arr[1]; 
    cout << gcdOfFactorial(arr, 2); 
    return 0; 
} 
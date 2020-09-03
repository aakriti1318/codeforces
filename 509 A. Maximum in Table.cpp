//https://codeforces.com/problemset/problem/509/A
// 509 A. Maximum in Table

#include<bits/stdc++.h>
using namespace std;
int a[10][10], n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                a[i][j]=1;
            }
            else if(j==0){
                a[i][j]=1;
            }
            else{
            a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }
    cout<<a[n-1][n-1];
    return 0;
}
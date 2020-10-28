//https://codeforces.com/problemset/problem/384/A
//384A - Coder

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0; cin>>n;
    char mat[1005][1005];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i%2==1 && j%2==1) || (i%2 == 0 && j%2 == 0)) {
                count++;
                mat[i][j] = 'C';
            }
            else mat[i][j] = '.';
        }
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/764/A
// 764A - Taymyr is calling you

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n,m,z; cin>>n>>m>>z;
    ll count=0;
    for(int i=1;i<=z;++i){
        if(i%n==0 && i%m == 0) count++;
    }
    cout<<count;
}
//https://codeforces.com/problemset/problem/214/A
// 1108A - Two distinct points

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,count=0;
    cin>>n>>m;
    for(int a=0;a*a<=n && a<=m ; ++a){
        ll b = n - a*a;
        if(a+b*b == m) count++;
    }
    cout<<count;
    return 0;
}
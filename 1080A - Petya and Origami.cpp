//https://codeforces.com/problemset/problem/1080/A
//1080A - Petya and Origami

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,k;
int main(){
    cin>>n>>k;
    ll a = 2*n;
    ll b = 5*n;
    ll c = 8*n;
    ll res = ceil(1.0*a/k) + ceil(1.0*b/k) + ceil(1.0*c/k);
    cout<<res;
    return 0;
}
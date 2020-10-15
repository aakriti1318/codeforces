//https://codeforces.com/problemset/problem/984/A
//	984A - Game

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(n&1){
        cout<<a[n/2];
    }
    else cout<<a[(n-1)/2];
    return 0;
}
//https://codeforces.com/problemset/problem/1243/A
//1243A - Maximum Square

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll mx = 0;
        for(int i=n-1;i>=0;i--){
            ll ans = min(a[i],n-i);
            mx = max(mx, ans);
        }
        cout<<mx<<endl;
    }
    return 0;
}
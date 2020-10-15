//https://codeforces.com/problemset/problem/1417/A
//1417A - Copy-paste
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll ans=0;
        for(int i=1;i<n;i++){
            ans += (k-a[i])/a[0];
        }
        cout<<ans<<endl;
    }
    return 0;
}
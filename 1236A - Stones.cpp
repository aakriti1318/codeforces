//https://codeforces.com/problemset/problem/1236/A
//1236A - Stones

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        ll mnn = min(b, c/2), ans = 0;
        if(mnn > 0) {
            ans += (3 * mnn);
            b -= mnn;
        }
        mnn = min(a, b/2);
        if(mnn > 0) {
            ans += (3 * mnn);
        }
        cout<<ans<<endl;
    }
}
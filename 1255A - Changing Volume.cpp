//https://codeforces.com/problemset/problem/1096/A
//1255A - Changing Volume
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int compute(ll c){
    ll ans=0, idx;
    idx = c/5;
    c = c-(5*idx);
    ans+=idx;
    idx = c/2;
    c = c-(2*idx);
    ans+=idx;
    ans += c;
    return ans;
}
int main(){
    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll c = abs(a-b);
        cout<<compute(c)<<endl;
    }
    return 0;
}

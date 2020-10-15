//https://codeforces.com/problemset/problem/1061/A
//A. Coins

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int makeCoin(ll n,ll s){
    ll amt, ans=0;
    for(int i=n;i>=1;i--){
        amt = s/i;
        ans += amt;
        s -= amt*i;
    }
    return ans;
}
int main(){
    ll n,s; cin>>n>>s;
    cout<<makeCoin(n,s);
}
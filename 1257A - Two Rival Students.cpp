//https://codeforces.com/problemset/problem/1257/A
// 1257A - Two Rival Students

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,a,b;
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>x>>a>>b;
        if(a>b) swap(a,b);
        if(b+x <= n){
            b = b+x;
            cout<<b-a<<endl;
        }
        else {
            ll p = n-b;
            ll q = x-p;
            if(a>q) cout<<abs(n-(a-q))<<endl;
            else cout<<n-1<<endl;
        }
    }
    return 0;
}
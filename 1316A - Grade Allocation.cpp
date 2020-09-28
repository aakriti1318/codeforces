//https://codeforces.com/problemset/problem/1316/A
// 	1316A - Grade Allocation

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    ll n,m;
    while(t--){
        ll sum=0;
        cin>>n>>m;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        cout<<min(sum,m)<<endl;
    }
}
//https://codeforces.com/problemset/problem/1421/A
//	1421A - XORwice
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll d = a^b;
        cout<<d<<endl;
    }
    return 0;
}

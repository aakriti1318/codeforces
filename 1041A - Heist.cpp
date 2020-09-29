//https://codeforces.com/problemset/problem/1041/A
//1041A - Heist

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll a[n];
    ll x,y;
    cin>>a[0];
    for(int i=1;i<n;i++) cin>>a[i];
    sort(a,a+n);
    x = a[n-1];
    y = a[0];
    cout<<(x-y+1)-n<<endl;
    
}
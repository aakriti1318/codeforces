//https://codeforces.com/problemset/problem/1102/A
//1102A - Integer Sequence Dividing

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll m = n*(n+1);
    m = m/2;
    cout<<m%2;
    return 0;
}
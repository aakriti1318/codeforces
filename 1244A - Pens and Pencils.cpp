//https://codeforces.com/problemset/problem/1102/A
//1102A - Integer Sequence Dividing

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin>>t;
    ll a,b,c,d,k;
    while(t--){
        cin>>a>>b>>c>>d>>k;
        ll x = (b/d)+1;
        ll y = (a/c);
        if(x+y<=k){
            y = k-x;
            cout<<y<<" "<<x<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
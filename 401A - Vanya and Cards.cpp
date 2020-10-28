// https://codeforces.com/problemset/problem/401/A
//401A - Vanya and Cards

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n,x; cin>>n>>x;
    ll a,sum=0,count=0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    sum = abs(sum);
    if(sum == 0) cout<<'0';
    else if(sum<=x) cout<<"1";
    else{
        if(sum%x ==0) cout<<(sum/x);
        else cout<<sum/x+1;
    }
}
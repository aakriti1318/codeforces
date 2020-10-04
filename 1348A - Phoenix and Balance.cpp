//https://codeforces.com/problemset/problem/1348/A
//1348A - Phoenix and Balance

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll sum1=pow(2.0,n);
        ll sum2=0;
        ll m = n/2;
        for(int i=1;i<n;i++){
            if(i<m) sum1+=pow(2.0,i);
            else sum2+=pow(2.0,i);
        }
        cout<<abs(sum1-sum2)<<endl;
    }
}
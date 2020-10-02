//https://codeforces.com/problemset/problem/1368/A
// 1368A - C+=

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    ll a,b,n;
    while(t--){
        cin>>a>>b>>n;
        ll sum=0,ans=0;
        while(sum<=n) {
            if(a>b){
                b+=a;
                sum=b;
                ans++;
            }
            else{
                a += b;
                sum = a;
                ans++;
            }
            if(sum>n) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
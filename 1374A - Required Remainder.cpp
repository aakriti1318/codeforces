// https://codeforces.com/problemset/problem/1374/A
// 	1374A - Required Remainder

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,n,ans,t;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        ans = (n-y)%x;
        cout<<n-ans<<endl;
    }
    return 0;
}
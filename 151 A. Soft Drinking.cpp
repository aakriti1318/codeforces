// https://codeforces.com/problemset/problem/151/A
// 151 A. Soft Drinking

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans1 = (k*l)/nl;
    int ans2 = c*d;
    int ans3 = p/np;
    int ans = min(ans1,min(ans2,ans3));
    ans = ans/n;
    cout<<ans;
}
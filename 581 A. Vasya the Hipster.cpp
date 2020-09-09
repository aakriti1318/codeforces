//https://codeforces.com/problemset/problem/581/A
// 581 A. Vasya the Hipster

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans1 = min(a,b);
    int ans2=0;
    int m = max(a,b);
    m = m-ans1;
    ans2 = m/2;

    cout<<ans1<<" "<<ans2;
    return 0;
}
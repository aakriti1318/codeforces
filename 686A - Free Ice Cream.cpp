//https://codeforces.com/problemset/problem/686/A
// 686A - Free Ice Cream
#include<bits/stdc++.h>
using namespace std;
int n,x,ans,b;
char a;
int main(){
    cin>>n>>x;
    while(n--){
        cin>>a;
        cin>>b;
        if(a == '+') x = x+b;
        else if(b<=x) x = x-b;
        else ans++;
    }
    cout<<x<<" "<<ans;
    return 0;
}
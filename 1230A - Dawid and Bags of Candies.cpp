//https://codeforces.com/problemset/problem/1230/A
// 1230A - Dawid and Bags of Candies

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[4];
int main(){
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    if(a[0]+a[3] == a[2]+a[1] || a[0]+a[1]+a[2]==a[3]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
//https://codeforces.com/problemset/problem/1283/A
// 1283 A. Minutes Before the New Year

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int hr,min;
        cin>>hr>> min;
        hr = hr*60 + min;
        cout<<1440-hr<<endl;
    }
    return 0;
}
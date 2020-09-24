//https://codeforces.com/problemset/problem/1223/A
// 	1223A - CME

#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        if( n == 2) cout<<2<<endl;
        else if (n %2 == 0 && n > 2) cout<<0<<endl;
        else cout<<1<<endl;
    }
}
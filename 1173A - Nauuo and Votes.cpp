//https://codeforces.com/problemset/problem/1173/A
//1173A - Nauuo and Votes

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll x,y,z; cin>>x>>y>>z;
    if(x>y){
        if(x<=y+z) cout<<"?";
        else cout<<"+";
    }
    else if(y>x){
        if(y<=x+z) cout<<"?";
        else cout<<"-";
    }
    else {
        if(z==0) cout<<"0";
        else cout<<"?";
    }
    return 0;
}
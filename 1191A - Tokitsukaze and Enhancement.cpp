//https://codeforces.com/problemset/problem/1191/A
//1191A - Tokitsukaze and Enhancement

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll x; cin>>x;
    ll n=4;
    if(x%n == 1) cout<<0<<" A"<<endl;
    else if(x%n == 3){
        x = x+2;
        cout<<2<<" A"<<endl;
    }
    else if(x%n == 2){
        x = x+1;
        cout<<1<<" B"<<endl;
    }
    else{
        x = x+1;
        cout<<1<<" A"<<endl;
    }
    return 0;
}
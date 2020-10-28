//https://codeforces.com/problemset/problem/1096/A
//1096A - Find Divisible
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t; cin>>t;
    while(t--){
        ll l,r,x,y; cin>>l>>r;
        for(int i = l; i<=r;i++){
            if(i*2<=r){
                x = i;
                y = i*2;
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

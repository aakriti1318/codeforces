//https://www.geeksforgeeks.org/pair-in-cpp-stl/
//	918A - Eleven

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n; cin>>n;
    map<int,bool> m;
    ll a=1, b=1,c,i;
    while(a<=n){
        m[a] = 1;
        m[b] = 1;
        c = a+b;
        a = b;
        b = c;
    }
    for(i=1;i<=n;i++){
        if(m[i]) cout<<"O";
        else cout<<"o";
    }
    return 0;
}   
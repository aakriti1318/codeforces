//https://codeforces.com/problemset/problem/1196/A
//1196A - Three Piles of Candies

#include<bits/stdc++.h>
using namespace std;
#define dat int64_t
int main(){
    int t;
    cin>>t;
    while(t--){
        dat a,b,c;
        cin>>a>>b>>c;
        dat ans = a+b+c;
        cout<<ans/2<<endl;
    }
    return 0;
}
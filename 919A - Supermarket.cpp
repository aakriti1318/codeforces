//https://codeforces.com/problemset/problem/919/A
//	919A - Supermarket

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    double n,m; cin>>n>>m;
    double a,b,res,ans;
    double mn = INT_MAX;
    while(n--){
        cin>>a>>b;
        ans = a/b;
        if(ans<mn) mn = ans;
    }
    cout<<fixed<<setprecision(8)<<mn*m;
    return 0;
}

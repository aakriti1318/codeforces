//https://codeforces.com/problemset/problem/1271/A
//	1271A - Suits

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,s,v,j,e,f; cin>>t>>s>>v>>j>>e>>f;
    // 1st suit - tie n jacket 
    // 2nd suit - scarf n vest n jacket 
    ll ans=0;
    while(j--){
        if(t&&s&&v){
            if(e>f){
                ans+=e;
                t--;
            }
            else{
                ans+=f;
                s--; v--;
            }
        }
        else if(t) ans+=e,t--;
        else if(s && v) {
            ans+=f;
            s--; v--;
        }
        else break;
    }
    cout<<ans;
    return 0;
}
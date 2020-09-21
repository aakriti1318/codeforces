//https://codeforces.com/problemset/problem/1398/A
//1398A - Bad Triangle

#include<bits/stdc++.h>
using namespace std;
#define dat int64_t
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main(){
    fastread();
    ll t,n,a[50001];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll x=0,y=0,z=0,sum=0, flag=0;
        sum = a[1]+a[2];
        x=1,y=2;
        for(ll i=3;i<=n;i++){
            if(a[i]>=sum){
                z = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<x<<" "<<y<<" "<<z<<endl;
        else 
            cout<<-1<<endl;
    }
    return 0;
}
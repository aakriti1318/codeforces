//https://codeforces.com/problemset/problem/1430/B
//1430B - Barrels

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		for(int i=n-1;i>0;i--){
			if(k>0){
				a[n]+=a[i];
				k--;
			}
			else break;
		}
		cout<<a[n]<<endl;;
    }

}
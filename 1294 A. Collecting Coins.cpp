//https://codeforces.com/problemset/problem/1294/A
// 1294 A. Collecting Coins 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mas[3];
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>mas[0]>>mas[1]>>mas[2];
        cin>>n;
        sort(mas,mas+3);
        ll ans = mas[2]-mas[1];
        ans += mas[2]-mas[0];
        if(n>=ans){
            n = n-ans;
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
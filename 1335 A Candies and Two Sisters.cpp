// https://codeforces.com/problemset/problem/1335/A
// 1335 A. Candies and Two Sisters

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans = 0;
        if(n<=2){
            ans = 0;
        }
        else{
            if(n&1){
                ans = ((n+1)/2) -1 ;
            }
            else{
                ans = (n/2)-1;
            }
        }
        cout<<ans<<endl;
    }
}
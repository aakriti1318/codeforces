//https://codeforces.com/problemset/problem/80/A
// 80A - Panoramix's Prediction
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i == 0||n%(i+2)==0)
            return false;
    return true;
}

int nextPrime(int n){
    if(n<=1) return 2;
    int p = n;
    bool found = false;
    while(!found){
        p++;
        if(isprime(p)) found = true;
    }
    return p;
}
int main(){
    int n,k; cin>>n>>k;
    int ans = nextPrime(n);
    if(ans == k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
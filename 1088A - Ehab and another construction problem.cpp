//https://codeforces.com/problemset/problem/1088/A
//1088A - Ehab and another construction problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n==1) cout<<-1;
    else cout<<n-(n%2)<<" "<<2;
    return 0;
}
// https://codeforces.com/problemset/problem/486/A
// Calculating Function 486A

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a;
    cin>>n;
    if(n&1){
        a = ((n+1)/2)*(-1);
    }
    else{
        a = n/2;
    }
    cout<<a;
    return 0;
}
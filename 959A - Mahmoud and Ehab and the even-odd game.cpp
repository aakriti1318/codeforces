// https://codeforces.com/problemset/problem/959/A
//	959A - Mahmoud and Ehab and the even-odd game

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n&1) cout<<"Ehab";
    else cout<<"Mahmoud";
    return 0;
}
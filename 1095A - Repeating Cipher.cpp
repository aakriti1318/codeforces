//https://codeforces.com/problemset/problem/1095/A
//1095A - Repeating Cipher

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,str;
    int n; cin>>n;
    cin>>s;
    for(int i=0,j=1;i<n;i=i+j,j++){
        str.push_back(s[i]);
    }
    cout<<str<<endl;
    return 0;
}
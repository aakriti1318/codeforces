//https://codeforces.com/problemset/problem/908/A
//	908A - New Year and Counting Cards

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin>>s;
    ll count=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u') count++;
        else if(s[i] == '1'|| s[i] == '3'|| s[i] == '5'|| s[i] == '7'|| s[i] == '9') count++;
    }
    cout<<count;
    return 0;
}

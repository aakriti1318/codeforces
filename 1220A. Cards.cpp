//https://codeforces.com/problemset/problem/1220/A
//	1220A - Cards

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int one = 0 ,zero = 1;
    map<char,int> :: iterator ip;
    for(ip = mp.begin();ip!=mp.end();ip++){
        if(ip->first == 'n'){
            one = ip->second;
        }
        else if(ip->first == 'z'){
            zero = ip->second;
        }
    }
    for(int i=0;i<one;i++){
        cout<<"1 ";
    }
    for(int i=0;i<zero;i++){
        cout<<"0 ";
    }
        
    return 0;
}
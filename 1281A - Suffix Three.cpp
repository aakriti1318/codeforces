//https://codeforces.com/problemset/problem/1281/A
//	1281A - Suffix Three

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    string str;
    while(t--){
        cin>>str;
        int n= str.size();
        if(str[n-1] == 'o') cout<<"FILIPINO"<<endl;
        else if(str[n-1] == 'u') cout<<"JAPANESE"<<endl;
        else cout<<"KOREAN"<<endl;
    }
    return 0;
}
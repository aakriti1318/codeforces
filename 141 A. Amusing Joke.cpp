//https://codeforces.com/problemset/problem/141/A
// 141 A. Amusing Joke

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    str1.append(str2);
    sort(str1.begin(),str1.end());
    sort(str3.begin(),str3.end());
    if(str1.compare(str3)==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
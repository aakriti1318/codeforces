//https://codeforces.com/problemset/problem/1216/A
// 	1216A - Prefixes

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int m=0;
   for(int i=0;i<n;i+=2){
            if(s[i]=='a'&&s[i+1] == 'a')
                m++, s[i] = 'b';
            else if(s[i] == 'b' && s[i+1] == 'b')
                m++, s[i] = 'a';
    } 
    cout<<m<<endl;
    cout<<s;
    return 0;
}

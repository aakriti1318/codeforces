//https://codeforces.com/problemset/problem/32/B
// 32B - Borze

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int ans[205];
    int j=0;
    for(int i=0;i<s.size();){
        if(s[i] == '.'){
            ans[j] = 0;
            j++;
            i++;
        }
        else if(s[i] == '-' and s[i+1] == '.'){
            ans[j] = 1;
            j++;
            i+=2;
        }
        else if(s[i] == '-' and s[i+1] == '-'){
            ans[j] = 2;
            j++;
            i+=2;
        }
    }
    for(int i=0;i<j;i++) cout<<ans[i];
    return 0;
}
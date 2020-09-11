//https://codeforces.com/problemset/problem/520/A
// 520 A. Pangram

#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[101];
    int i,n,count=0,len;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            s[i] = 97 + s[i] - 65;
        }
    }
    sort(s,s+n);
    for(i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(count==25) cout<<"YES";
    else cout<<"NO";
    return 0;
}
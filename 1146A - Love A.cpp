//https://codeforces.com/problemset/problem/1146/A
// 1146A - Love "A"

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    sort(str.begin(), str.end());
    int count=0,ans,n = str.size();
    for(int x = 0;x<n;x++){
        if(str[x]=='a') count++;
        else break;
    }
    if(count>n/2){
        ans = n;
    }
    else {
        ans = n-count;
        ans = ans - count;
        ans = n-ans-1;
    }
    cout<<ans;
    return 0;
}

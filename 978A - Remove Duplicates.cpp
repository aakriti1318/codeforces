//https://codeforces.com/problemset/problem/978/A
// 978A - Remove Duplicates

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n;
    int a[n];
    map<int,bool> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    m=0;
    for(int i=n-1;i>=0;i--){
        if(mp[a[i]])
            a[i] = -1;
        else{
            mp[a[i]] = 1;
            m++;
        }
    }
    cout<<m<<endl;
    for(int i=0;i<n;i++){
        if(a[i]!=-1) cout<<a[i]<<" ";
    }
    return 0;
}

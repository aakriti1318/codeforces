//https://codeforces.com/problemset/problem/1154/A
// 1154 A. Restoring Three Numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        cout<<v[n-1]-v[i]<<' ';
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1092/B
// 1092B - Teams Forming

#include<bits/stdc++.h>
using namespace std;

int arr[105];
int main(){
    int n,i,ans; cin>>n;
    for (i=0; i<n; i++)
        cin>>arr[i];
    sort (arr,arr+n);
    ans = 0;
    for (i=1; i<n; i+=2)
        ans += arr[i]-arr[i-1];

    cout<<ans;
    return 0;
}
//https://codeforces.com/problemset/problem/716/A
// 716A - Crazy Computer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c; cin>>n>>c;
    vector<int> v;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i] - arr[i-1] <= c){
            v.push_back(arr[i-1]);
        }
        else{
            v.clear();
        }
    }
    cout<<v.size()+1;
}
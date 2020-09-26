//https://codeforces.com/problemset/problem/1003/A
// 1003A - Polycarp's Pockets

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int maxc = 1,res = arr[0],curr = 1;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]) curr++;
        else{
            if(curr>maxc){
                maxc = curr;
                res = arr[i-1];
            }
            curr=1;
        } 
    }
    if(curr>maxc){
        maxc = curr;
        res = arr[n-1];
    }
    auto low = lower_bound(arr.begin(),arr.end(),res);
    auto up = upper_bound(arr.begin(),arr.end(),res);
    cout<<up-low;
}
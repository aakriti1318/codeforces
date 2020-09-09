//https://codeforces.com/problemset/problem/1325/B
// 1325 B. CopyCopyCopyCopyCopy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
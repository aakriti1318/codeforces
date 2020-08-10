//https://codeforces.com/problemset/problem/228/A
// Is your horseshoe on the other hoof? 228A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int x;
    set<int> s;
    for(int i=0;i<4;i++){
        cin>>x;
        s.insert(x);
    }
    int m = s.size();
    cout<<n-m;
}
//https://codeforces.com/problemset/problem/467/A
// George and Accommodation 467A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}

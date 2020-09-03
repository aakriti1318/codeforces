//https://codeforces.com/problemset/problem/1385/B
//1385 B. Restore the Permutation by Merger

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int>:: iterator ip;
        auto end = v.end();
        for(ip = v.begin();ip!=v.end();++ip){
            end = remove(ip+1,end,*ip);
        }
        v.erase(end,v.end());
        for(ip = v.begin();ip!=v.end();++ip){
            cout<<*ip<<" ";
        }
        cout<<endl;
    }
}
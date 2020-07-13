//https://codeforces.com/problemset/problem/41/A
// Translation 41A

#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    if(n==m){
        reverse(s2.begin(),s2.end());
        if(s1.compare(s2)==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }   
    else{
        cout<<"NO";
    } 
    return 0;
}

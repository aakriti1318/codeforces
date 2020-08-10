//https://codeforces.com/problemset/problem/785/A
// Anton and Polyhedrons 785A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        string s;
        cin>>s;
        if(s[0]=='T') 
            count=count+4;
        else if(s[0]=='C')
            count = count+6;
        else if(s[0]=='O')
            count = count+8;
        else if(s[0]=='D')
            count = count+12;
        else
            count = count+20;
    }
    cout<<count;
}
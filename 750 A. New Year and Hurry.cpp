//https://codeforces.com/problemset/problem/750/A
// 750 A. New Year and Hurry

#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,t;
    cin>>p>>t;
    int mint = 240 - t;
    int sum=0,count=0;
    for(int i=1;i<=p;i++){
        sum += 5*i;
        if(sum>mint)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
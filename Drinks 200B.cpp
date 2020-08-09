// https://codeforces.com/problemset/problem/200/B
// Drinks 200B

#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    double a, sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<sum/n;
    return 0;
}
//https://codeforces.com/problemset/problem/1183/A
//1183A - Nearest Interesting Number

#include<bits/stdc++.h>
using namespace std;
int sumDigi(int num){
    return num == 0? 0:num%10 + sumDigi(num/10);
}
int main(){
    int n; cin>>n;
    int ans = sumDigi(n);
    int res;
    if(ans%4 == 0) res = n;
    else {
        while(ans%4!=0){
            ans = sumDigi(n);
            ++n;
        }
        res = n-1;
    }
    
    cout<<res;
    return 0;
}
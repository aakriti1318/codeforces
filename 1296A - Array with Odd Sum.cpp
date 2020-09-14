// https://codeforces.com/problemset/problem/1296/A
//	1296A - Array with Odd Sum

#include<bits/stdc++.h>
using namespace std;
int mas[2005];
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0,sum1=0,sum2=0;
        for(int i=1;i<=n;i++){
            cin>>mas[i];
            sum += mas[i];
            if(mas[i]%2) sum1++;
            else sum2++;
        }
        if(sum&1) cout<<"YES"<<endl;
        else if(sum1&&sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
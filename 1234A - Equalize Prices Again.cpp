//https://codeforces.com/problemset/problem/1234/A
// 1234A - Equalize Prices Again

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum%n==0) cout<<sum/n<<endl;
        else cout<<(sum/n)+1<<endl;
    }
    return 0;
}
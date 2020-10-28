//https://codeforces.com/problemset/problem/1436/A
//	1436A - Reorder


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        double n,m; cin>>n>>m;
        double a,sum=0.0;
        vector<double> v;
        for(double i=1;i<=n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(double i=1;i<=n;i++){
            for(double j=i;j<=n;j++){
                sum += v[i]/j;
            }
        }
        if(m == ceil(sum)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
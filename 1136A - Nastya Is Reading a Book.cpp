//https://codeforces.com/problemset/problem/1136/A
//	1136A - Nastya Is Reading a Book

#include<bits/stdc++.h>
using namespace std;
int l[1000005],r[1000005];
int main(){
   int n,sum=0; cin>>n;
   for(int i=0;i<n;i++) cin>>l[i]>>r[i];
   int k;  cin>>k;
   for(int i=0;i<n;i++){
       if(k>=l[i] && k<=r[i]) break;
       else sum++;
   }
   cout<<n-sum;
   return 0;
}
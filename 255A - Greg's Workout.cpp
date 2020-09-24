//https://codeforces.com/problemset/problem/255/A
// 255A - Greg's Workout
#include<bits/stdc++.h>
using namespace std;
int a[25];
int main(){
    int n; cin>>n;
    int sum1 = 0,sum2=0,sum3=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i+=3) sum1 += a[i];
    for(int i=1;i<n;i+=3) sum2 += a[i];
    for(int i=2;i<n;i+=3) sum3 += a[i];
    if(sum1>sum2 and sum1>sum3) cout<< "chest";
    else if(sum2>sum1 and sum2>sum3) cout<<"biceps";
    else cout<<"back";
    return 0;
}
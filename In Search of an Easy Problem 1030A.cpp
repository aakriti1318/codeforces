//https://codeforces.com/problemset/problem/1030/A
// In Search of an Easy Problem 1030A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1 && a[i]!=0){
            flag=1;
            break;
        }
        else if(a[i]==0){
            flag=0;
        }
    }
    
    if(flag==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}

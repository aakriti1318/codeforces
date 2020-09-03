//https://codeforces.com/problemset/problem/758/A
//758A - Holiday Of Equality

#include<bits/stdc++.h>
using namespace std;
int maxx(int a[],int n){
    int m = 0;
    for(int i=0;i<n;i++){
        if(m<a[i]){
            m=a[i];
        }
    }
    return m;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int m = maxx(a,n);
    for(int i=0;i<n;i++){
        if(m - a[i] > 0 ){
            sum += (m-a[i]);
        }
    }
    cout<<sum;
    return 0;

}
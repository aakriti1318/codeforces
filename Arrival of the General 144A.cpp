//https://codeforces.com/problemset/problem/144/A
// Arrival of the General 144 A

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int max = 0;
    int min = 1000;
    int k =0, j=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>max){
            k=i;
            max = x;
        }
        if(x<=min){
            j=i;
            min=x;
        }
    }



    if(k>j){
        cout<<(k-1)+(n-j)-1;
    }
    else{
        cout<<(k-1)+(n-j);
    }
    return 0;
}
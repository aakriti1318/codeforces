// https://codeforces.com/problemset/problem/703/A
// 	703A - Mishka and Game

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,c,count1=0,count2=0,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>m>>c;
        if(m>c){
            count1++;
        }
        else if(m<c){
            count2++;
        }
    }
    if(count1>count2) cout<<"Mishka";
    else if(count1==count2) cout<<"Friendship is magic!^^";
    else cout<<"Chris";
    return 0;
}
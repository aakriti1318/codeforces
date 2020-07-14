//https://codeforces.com/problemset/problem/734/A
// Anton and Danik 734A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count1=0,count2=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'){
            count1++;
        }
        else if(str[i]=='D'){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Anton";
    }
    else if(count1==count2){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}

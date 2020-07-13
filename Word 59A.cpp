//https://codeforces.com/problemset/problem/59/A
// 59A Word

#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int count1=0,count2=0;
    for(int i=0;i<str.size();i++){
        if(str[i] >= 65 and str[i] <=90){
            count1++;
        }
        else if(str[i] >= 97 and str[i] <=122){
            count2++;
        }
    }
    int n=str.size();
    if(count1==count2){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else if(n-count1<=(n-1)/2){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else if(n-count2<=(n-1)/2){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout<<str;
    return 0;
}

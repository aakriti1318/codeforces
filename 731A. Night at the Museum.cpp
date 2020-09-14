// https://codeforces.com/problemset/problem/731/A
//	731A. Night at the Museum

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char s = 'a';
    int n = str.size();
    int sum=0;
    for(int i=0;i<n;i++){
        int a = abs(str[i] - s);
        int b = 26 - abs(a);
        sum +=  min(a,b);
        s = str[i];                                                                                                  
    }
    cout<<sum;
    return 0;
}
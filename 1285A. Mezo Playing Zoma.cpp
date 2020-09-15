//https://codeforces.com/problemset/problem/1285/A
//1285A. Mezo Playing Zoma

#include <iostream>
using namespace std;
int main() {
    int n,count1=0,count2=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'L') count1++;
        else count2++;
    }
    cout<<count1+count2+1;
}

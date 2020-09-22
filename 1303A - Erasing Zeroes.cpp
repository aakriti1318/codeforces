//https://codeforces.com/problemset/problem/1303/A
//	1303A - Erasing Zeroes
#include <bits/stdc++.h> 
using namespace std; 
string s;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l=0,r=s.size()-1,ans=0;
        while(l<=r&&s[l]=='0') ++l;
        while(r>=l&&s[r]=='0') --r;
        for(int i=l;i<=r;i++) ans+=(s[i]=='0');
        cout<<ans<<endl;
    }
}

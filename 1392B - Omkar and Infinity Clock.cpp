//https://codeforces.com/problemset/problem/1392/B
//1392B - Omkar and Infinity Clock

#include<bits/stdc++.h>
#define int long long
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N=2e6+7;
const int M=2e4+5;
const double eps=1e-8;
const int mod=998244353;
const int inf=0x7fffffff;
const double pi=3.1415926;
using namespace std;
int a[N];
signed main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0,num=-inf,sum=-inf;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            num=max(num,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            a[i]=num-a[i];
            sum=max(a[i],sum);
        }
        if(k%2==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<sum-a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
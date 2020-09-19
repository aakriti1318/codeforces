//https://codeforces.com/problemset/problem/1077/A
//	1077A - Frog Jumping

#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)


int main()
{
    ll row, col = 0, tc, t = 1;

    sc1(tc);

    while (tc--){

        ll a, b, k;
        sc2(a, b);
        sc1(k);

        ll ans = 0;

        if(k%2==1){
            ll sd = (k/2)+1;
            ll ans = (sd*a) - (k/2)*b;
            pf1(ans);
        }
        else{
            ll ans = ((k/2)*a) - ((k/2)*b);
            pf1(ans);
        }
    }

    return 0;
}
//https://codeforces.com/problemset/problem/1304/A
// 	1304A - Two Rabbits

#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
int main() {
        ios::sync_with_stdio(0); cin.tie(0);
        int t; cin >> t;
        while (t--) {
                int a, b, c, d; 
                cin >> a >> b >> c >> d;
                if (a > b || (b - a) % (c + d)) 
                    cout << "-1" << endl;
                else 
                    cout << (b - a)/(c + d) << endl;
        }
        return 0;
}

//https://codeforces.com/problemset/problem/1301/A
//1301A - Three Strings

#include<bits/stdc++.h>
using namespace std;
 
int arr[2000000];
int main() {
    int t;
    cin >> t;
    while(t --) {
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 1;
        for(int i = 0; i < a.length(); i ++) {
            if(a[i] != c[i] and b[i] != c[i]) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1311/A
//1311A. Add Odd or Subtract Even


#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,res=0;
        cin>>a>>b;
        int ans;
        if(a>b){
        ans = a-b;
        if(ans%2 == 0){
            res=1;
        }
        else res=2;
        }
        else if(b>a){
            ans = b-a;
            if(ans%2 == 0){
                res=1;
            }
            else res=2;
        }
        cout<<res<<endl;
    }
    return 0;
}

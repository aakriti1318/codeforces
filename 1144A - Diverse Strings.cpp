//https://codeforces.com/problemset/problem/1144/A
//	1144A - Diverse Strings

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k; cin>>t;
    while(t--){
        string str;
        cin>>str;
        map<int,int> mp;
        sort(str.begin(), str.end());
        k = true;
        for(int i=1;str[i];i++){
            mp[str[i]]++;
            if((mp[str[i]]>1) || (str[i]-str[i-1]!=1)){
                k=false;
                cout<<"No";
                break;
            }
        }
        if(k) cout<<"Yes";
        cout<<endl;
        mp.clear();
        str.clear();
    }
    return 0;
}
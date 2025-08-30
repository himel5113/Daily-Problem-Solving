
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define find_string "codeforces" 
void solve() {
    string s;
    cin>>s;
    ll count=0;
    for(ll i=0; i<s.size(); i++) {
        if(s[i]!=find_string[i])
        count++;
    }
    cout<<count<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}

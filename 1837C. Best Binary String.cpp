#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    string s;
    cin>>s;
    char check='0';
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='1' || s[i]=='0')
        check=s[i];
        else if(s[i]=='?')
        s[i]=check;
    }
    cout<<s<<endl;
}
int main() {

    opt();

    tc() {
        solve();
    }
}

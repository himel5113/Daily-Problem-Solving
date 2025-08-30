#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    string s;
    cin>>s;
    for(ll i=0; i<s.size(); i++) {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        i+=2;
        else {
            cout<<s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B')
            cout<<" ";
        }
    }
}

int main() {
    opt();

    solve() ;
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    string s;
    cin>>s;
    ll scount = 0, gcount = 0;
    for(ll i=0; i<s.size(); i++) {
        if(isupper(s[i]))
        gcount++;
        else
        scount++;
    }
    if(islower(s[0]) && gcount == s.size()-1) {
        cout<<char(toupper(s[0]));
        for(ll i=1; i<s.size(); i++)
        cout<<char(tolower(s[i]));
    }
    else if(gcount == s.size()) {
        for(ll i=0; i<s.size(); i++) 
        cout<<char(tolower(s[i]));
    }
    else 
    cout<<s;
    
}

int main() {
    opt();
    solve();

    return 0;
}

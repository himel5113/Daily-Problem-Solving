#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s; cin >> s;
    for(ll i=1; i<s.size()-1; i++) {
        if(isalpha(s[i])) {
            cout << "No\n"; return;
        }
    }
    if(s.size() != 8) {
        cout << "No\n"; return;
    }
    bool f = false, f2 = false;
    string x = "";
    if((isalpha(s[0]) && isupper(s[0])) && (isalpha(s[s.size()-1]) && isupper(s[s.size()-1]))) f = true;
    for(ll i=1; i<s.size()-1; i++) x += s[i];
    // reverse(x.begin(), x.end());
    ll t = stoll(x);
    if(t >= 100000 && t <= 999999) f2 = true;
    cout << ((f && f2) ? "Yes\n" : "No\n");
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
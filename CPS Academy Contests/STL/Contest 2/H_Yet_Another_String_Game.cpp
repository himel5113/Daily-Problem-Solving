#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s; cin >> s;
    for(ll i=0; i<s.size(); i++) {
        if(i&1) {
            if(s[i] == 'z') s[i]--;
            else s[i] = 'z';
        }
        else {
            if(s[i] == 'a') s[i]++;
            else s[i] = 'a';
        }
    }
    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
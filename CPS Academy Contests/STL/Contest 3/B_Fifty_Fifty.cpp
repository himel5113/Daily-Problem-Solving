#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s; cin >> s;
    map<char, ll> mp;
    for(auto c : s) mp[c]++;
    ll ans = 0;
    if(mp.size() != 2) {
        cout << "No\n"; return;
    }
    for(auto [x, y] : mp) {
        if(y != (s.size()/2)) {
            cout << "No\n"; return;
        }
    }
    cout << "Yes\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t
    while(t--) {
        solve();
    }
    return 0;
}
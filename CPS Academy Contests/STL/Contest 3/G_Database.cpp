#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll c = 1;

void solve() {
    cout << "Scenario #" << c++ << ": ";
    ll n, r; cin >> n >> r;
    map<pair<ll, ll>, ll> mp;
    for(ll i=0; i<r; i++) {
        ll s, m; cin >> s >> m;
        pair<ll, ll> pr = {s, m};
        mp[pr]++;
    }
    string ans = "possible";
    for(auto [x, y] : mp) {
        if(y > 1) {
            ans = "impossible"; break;
        }
    }
    cout << ans << endl;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    vector<pair<ll, ll>> pr;
    for(ll i=0; i<4; i++) {
        ll x, y; cin >> x >> y;
        pr.push_back({x, y});
    }
    sort(pr.begin(), pr.end());
    ll ans = (pr[1].first-pr[0].first) + (pr[1].second - pr[0].second);
    cout << ans * ans << endl;
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
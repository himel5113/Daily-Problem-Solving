#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> pr(n);
    for(ll i = 0; i < n; i++) {
        cin >> pr[i].first >> pr[i].second;
    }

    ll ans = 0;
    ll prea = 0, preb = 0;
    for(ll i = 0; i < n; i++) {
        ll a = pr[i].first, b = pr[i].second;
        ll l = abs(a - prea);
        ll k = abs(b - preb);

        if((l&1) == (k&1)) {
            ans += l;
        }
        else {
            ans += (l - 1);
        }
        prea = a; preb = b;
    }
    ans += (m - prea);
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
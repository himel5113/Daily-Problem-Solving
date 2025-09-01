#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

ll n, m, k;

bool check(ll x) {
    return (x % n == 0 and x % m == 0);
}

void solve() {
    cin >> n >> m >> k;

    ll ans = 0, l = 0, r = 1e18;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(!check(mid) <= k) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
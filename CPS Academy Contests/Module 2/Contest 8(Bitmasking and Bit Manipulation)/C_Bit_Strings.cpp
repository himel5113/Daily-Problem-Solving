#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

ll power(ll n, ll k) {
    ll res = 1;
    n %= MOD;
    while (k) {
        if (k & 1) {
            res = (res * n) % MOD;
        }
        n = (n * n) % MOD;
        k >>= 1;
    }
    return res;
}

void solve() {
    int n; cin >> n;
    cout << power(2, n) << '\n';
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
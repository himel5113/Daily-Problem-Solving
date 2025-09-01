#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    ll ans = INT_MAX;
    for(int mask = 0; mask < (1 << n); mask++) {
        ll sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++) {
            if((mask >> i) & 1) sum1 += V[i];
            else sum2 += V[i];
        }
        ans = min(ans, abs(sum1 - sum2));
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
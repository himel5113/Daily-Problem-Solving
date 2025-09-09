#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    sort(V.begin(), V.end(), greater<int>());
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(i < m) {
            ans += (1LL * V[i] * (m - i));
        }
        else break;
    }
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
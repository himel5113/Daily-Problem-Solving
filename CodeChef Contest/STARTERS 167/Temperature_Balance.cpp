#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<ll> V(n), pre(n + 1, 0);
    for(auto &x : V) cin >> x;
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + V[i - 1];
    }
    ll sum = 0;
    for(auto i : pre) sum += abs(i);
    cout << sum << '\n';
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
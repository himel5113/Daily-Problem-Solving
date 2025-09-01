#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    sort(V.begin(), V.end());

    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        int lo = lower_bound(V.begin(), V.end(), x) - V.begin();
        cout << (V[lo] == x ? "Yes " : "No ");
        cout << lo + 1 << '\n';
    }
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
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

int c = 1;
void solve() {
    cout << "Case " << c++ << ": \n";
    int n, q; cin >> n >> q;
    vector<int> V(n);
    for(auto &x : V) cin >> x;

    while(q--) {
        int l, r; cin >> l >> r;
        int lo = lower_bound(V.begin(), V.end(), l) - V.begin();
        int up = upper_bound(V.begin(), V.end(), r) - V.begin();

        cout << up - lo << '\n';
    }
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
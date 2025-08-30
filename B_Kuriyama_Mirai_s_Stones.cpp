#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), V2;
    for(auto &x : V) cin >> x;
    V2 = V;
    sort(V2.begin(), V2.end());
    vector<ll> pre1(n+1, 0), pre2(n+1, 0);
    for(int i = 1; i <= n; i++) {
        pre1[i] = pre1[i - 1] + V[i - 1];
        pre2[i] = pre2[i - 1] + V2[i - 1];
    }

    int q; cin >> q;
    while(q--) {
        int type, l, r; cin >> type >> l >> r;
        if(type == 1) {
            cout << pre1[r] - pre1[l - 1] << '\n';
        }
        else {
            cout << pre2[r] - pre2[l - 1] << '\n';
        }
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
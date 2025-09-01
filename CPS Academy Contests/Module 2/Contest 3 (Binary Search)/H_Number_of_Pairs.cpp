#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    sort(V.begin(), V.end());

    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        int t1 = l - V[i];
        int t2 = r - V[i];

        int lo = lower_bound(V.begin() + i + 1, V.end(), t1) - V.begin();
        int up = upper_bound(V.begin() + i + 1, V.end(), t2) - V.begin();
        
        cnt += (up - lo);
        
    }
    cout << cnt << '\n';
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
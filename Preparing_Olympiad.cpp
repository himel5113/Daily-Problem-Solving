#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, l, r, x; cin >> n >> l >> r >> x;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    int cnt = 0;
    for(int mask = 0; mask < (1 << n); mask++) {
        vector<int> temp;
        for(int i = 0; i < n; i++) {
            if((mask >> i) & 1) {
                temp.push_back(V[i]);
            }
        }
        if(temp.size()) {
            // for(auto u : temp) cout << u << " "; cout << '\n';
            ll sum = accumulate(temp.begin(), temp.end(), 0LL);
            // bug(sum);
            int maxii = *max_element(temp.begin(), temp.end());
            int mini = *min_element(temp.begin(), temp.end());
            int diff = maxii - mini;
            // bug(maxii); 
            // bug(mini);
            // bug(diff);
            cnt += (sum >= l and sum <= r and diff >= x);
        }
    }
    cout << cnt << '\n';
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
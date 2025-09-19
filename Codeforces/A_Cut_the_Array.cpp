#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), pre(n + 1, 0);
    for(auto &x : V) cin >> x;
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + V[i - 1];
    }
    // for(auto i : pre) cout << i << ' '; cout << '\n';
    for(int l = 1; l <= n; l++) {
        for(int r = l + 1; r <= n; r++) {
            int s1 = pre[l] % 3;
            int s2 = (pre[r] - pre[l]) % 3;
            int s3 = (pre[n] - pre[r]) % 3;
            // bug(s1); bug(s2); bug(s3);
            if((s1 == s2 and s2 == s3 and s1 == s3) or (s1 != s2 and s2 != s3 and s1 != s3)) {
                cout << l << ' ' << r << '\n';
                return;
            }
        }
    }
    cout << "0 0\n";
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

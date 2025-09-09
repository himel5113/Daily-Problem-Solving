#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> p(n), q(n);
    for(auto &x : p) cin >> x;

    for(int i = 0; i < n; i++) {
        q[i] = n + 1 - p[i];
    } 

    for(auto i : q) cout << i << ' '; cout << '\n';
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
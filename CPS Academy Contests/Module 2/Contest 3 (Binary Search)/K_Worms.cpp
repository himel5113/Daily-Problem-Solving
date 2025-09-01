#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), temp;
    for(auto &X : V) cin >> X;
    temp.push_back(V[0]);
    for(int i = 1; i < n; i++) {
        temp.push_back(temp[i - 1] + V[i]);
    }

    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        int lo = lower_bound(temp.begin(), temp.end(), x) - temp.begin();
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
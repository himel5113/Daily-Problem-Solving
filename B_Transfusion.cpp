#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    ll sum = accumulate(V.begin(), V.end(), 0LL);
    ll div = sum / n;
    for(int i = 1; i < n - 1; i++) {
        ll diff = div - V[i - 1];
        V[i - 1] += diff;
        V[i + 1] -= diff;
    }
    // for(auto i : V) cout << i << ' '; cout << '\n';
    for(int i = 0; i < n - 1; i++) {
        if(V[i] != V[i + 1]) {
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
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
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    ll maxx = LLONG_MIN;
    sort(V.begin(), V.end());
    for(int i = 0; i < n - 1; i+=2) {
        maxx = max(maxx, abs(V[i] - V[i + 1]));
    }
    cout << maxx << '\n';
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
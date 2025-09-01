#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    ll x; cin >> x;
    ll l, r; cin >> l >> r;
    V.erase(V.begin() + x-1);
    V.erase(V.begin() + l-1, V.begin() + r-1);
    cout << V.size() << endl;
    for(auto i : V) cout << i << " ";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
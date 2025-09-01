#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    set<ll> st;
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &X : V) cin >> X, st.insert(X);
    ll q; cin >> q;
    while(q--) {
        ll x; cin >> x;
        cout << (st.count(x) ? "YES\n" : "NO\n");
    }
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
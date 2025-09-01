#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    ll x; cin >> x;
    set<ll> st;
    for(ll i=0; i<x; i++) {
        ll c; cin >> c; st.insert(c);
    }

    ll y; cin >> y;
    for(ll i=0; i<y; i++) {
        ll c; cin >> c; st.insert(c);
    }

    cout << (st.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
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
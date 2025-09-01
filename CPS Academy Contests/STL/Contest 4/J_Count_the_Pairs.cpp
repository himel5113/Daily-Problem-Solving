#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> V(n);
    set<ll> st;
    for(auto &x : V) cin >> x, st.insert(x);

    ll cnt = 0;
    for(ll i=0; i<n; i++) {
        cnt += (st.count(V[i]+k) > 0);
    }
    cout << cnt << endl;
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
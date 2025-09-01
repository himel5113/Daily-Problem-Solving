#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    bool f = false;
    ll temp = V[0];
    ll maxii = LLONG_MIN;
    for(ll i=1; i<n; i++) {
        maxii = max(maxii, V[i]);
    }
    cout << (temp <= maxii ? (maxii-temp+1) : 0) << endl;
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
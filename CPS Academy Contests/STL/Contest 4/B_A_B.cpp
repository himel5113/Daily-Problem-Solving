#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, m; 
    while(cin >> n >> m) {
        set<ll> st;
        for(ll i=0; i<n; i++) {
            ll c; cin >> c; st.insert(c);
        }
        for(ll i=0; i<m; i++) {
            ll c; cin >> c; st.insert(c);
        }
        for(auto i : st) cout << i << " "; cout << endl; st.clear();
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
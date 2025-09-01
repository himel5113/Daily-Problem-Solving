#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, m; cin >> n >> m;
    vector<string> V(n);
    for(auto &x : V) cin >> x;
    set<string> st;
    for(ll i=0; i<m; i++) {
        string s; cin >> s; st.insert(s);
    }
    for(auto c : V) {
        cout << (st.count(c) ? "Yes\n" : "No\n");
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    set<ll> st;
    ll n; cin >> n;
    vector<ll> V(n), ans;
    for(auto &x : V) cin >> x;
    ll m; cin >> m;
    vector<ll> a(m);
    for(auto &x : a) cin >> x, st.insert(x);
    for(auto i : V) {
        if(!st.count(i)) ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(auto i : ans) cout << i << " "; cout << endl;
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
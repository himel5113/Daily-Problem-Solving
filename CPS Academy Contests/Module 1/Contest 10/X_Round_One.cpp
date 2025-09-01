#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll a, b; cin >> a >> b;
    set<ll> st; st.insert(a); st.insert(b);
    for(ll i=1; i<=3; i++) {
        if(st.count(i) == 0) cout << i << endl;
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
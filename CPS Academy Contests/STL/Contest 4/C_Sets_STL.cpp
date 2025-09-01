#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

set<ll> st;

void solve() {
    ll t, x; cin >> t >> x;
    if(t == 1) {
        st.insert(x);
    }
    if(t == 2) {
        st.erase(x);
    }
    if(t == 3) {
        cout << (st.count(x) ? "Yes\n" : "No\n");
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
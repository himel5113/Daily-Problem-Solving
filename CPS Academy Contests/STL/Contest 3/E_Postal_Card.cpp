#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, m; cin >> n >> m;
    vector<string> V;
    for(ll i=0; i<n; i++) {
        string s, t = ""; cin >> s;
        ll sz = s.size();
        t = s.substr(3, 3);
        V.push_back(t);
    }
    set<string> st;
    ll cnt = 0;
    while(m--) {
        string x; cin >> x;
        st.insert(x);
    }
    for(auto c : V) {
        if(st.count(c)) cnt++;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> V[n];
    while(q--) {
        ll t; cin >> t;
        if(t == 0) {
            ll a, b; cin >> a >> b;
            V[a].push_back(b);
        }
        else if(t == 1) {
            ll a; cin >> a;
            for(ll i=0; i<V[a].size(); i++) {
                cout << V[a][i];
                if(i != V[a].size() - 1) cout << " ";
            } cout << endl;
        }
        else {
            ll a; cin >> a;
            V[a].clear();
        }
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
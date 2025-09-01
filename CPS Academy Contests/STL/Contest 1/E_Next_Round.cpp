#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    ll t = V[k-1];
    ll cnt = 0;
    for(auto i : V) {
        if(t <= i && i > 0) cnt++;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    map<ll, ll> mp;
    for(auto &x : V) cin >> x, mp[x]++;
    ll maxii = 0;
    for(auto[x, y] : mp) {
        maxii = max(maxii, y);
    } cout << maxii << endl;
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
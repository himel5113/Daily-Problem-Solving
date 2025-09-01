#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, k; cin >> n >> k;
    vector<string> V(n), temp;
    for(auto &x : V) cin >> x;
    for(ll i=0; i<k; i++) temp.push_back(V[i]);
    sort(temp.begin(), temp.end());
    for(auto u : temp) cout << u << endl;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    vector<ll> V(n), p, ne;
    for(auto &x : V) {
        cin >> x;
        (x >= 0) ? p.push_back(x) : ne.push_back(x);
    }
    sort(p.begin(), p.end()); sort(ne.begin(), ne.end());
    ll mini1 = (p.empty() ? LLONG_MAX : p[0]);
    ll mini2 = (ne.empty() ? LLONG_MAX : abs(ne[(ll)ne.size() - 1]));

    cout<< min(mini1, mini2) << endl; return;
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
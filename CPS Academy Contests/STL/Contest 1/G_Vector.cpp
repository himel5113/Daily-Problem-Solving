#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

vector<ll> V;

void solve() {
    ll t; cin >> t;
    if(t == 0) {
        ll x; cin >> x;
        V.push_back(x);
    }
    else if(t == 2) V.pop_back();
    else {
        ll x; cin >> x;
        cout << V[x] << endl;
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
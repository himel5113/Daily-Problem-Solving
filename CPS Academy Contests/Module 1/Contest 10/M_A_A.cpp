#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef long double ld;
const ll MOD = 1e9+7;

ll power(ll n, ll k) {
    ll res = 1;
    while(k) {
        if(k&1) res *= n;
        n *= n;
        k >>= 1;
    }
    return res;
}

void solve() {
    ll n; cin >> n;
    for(ll i=1; i<=15; i++) {
        if(power(i, i) == n) {
            cout << i << endl; return;
        }
    }
    cout << -1 << endl;
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
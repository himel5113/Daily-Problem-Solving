#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;



void solve() {
    ll n; cin >> n;
    vector<ll> fib(n);
    if(n == 0) {
        cout << 0 << endl; return;
    }
    if(n == 1) {
        cout << "0 1\n"; return;
    }
    fib[0] = 0; fib[1] = 1;
    for(ll i=2; i<n; i++) {
        fib[i] = (fib[i-1] + fib[i-2])%MOD;
    }
    for(auto x : fib) cout << x << " "; cout << endl;
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    for(ll i=0; i<=n; i++) {
        for(ll j=0; j<=n; j++) {
            for(ll k=0; k<=n; k++) {
                if(i+j+k <= n) cout << i << " " << j << " " << k << endl;
            }
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
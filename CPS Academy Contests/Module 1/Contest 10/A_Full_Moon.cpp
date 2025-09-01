#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ceiling(a, b) ((a / b) + (a % b != 0))
const ll MOD = 1e9+7;

void solve() {
    ll n, m, p; cin >> n >> m >> p;
    ll cnt = 0;
    for(ll i=m; i<=n; i+=p) cnt++;

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
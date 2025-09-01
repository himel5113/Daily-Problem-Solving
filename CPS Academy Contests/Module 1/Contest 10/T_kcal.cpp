#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll a, b; cin >> a >> b;
    if(a == 0 || b == 0) {
        cout << 0 << endl; return;
    }
    double x = b/100.0;
    cout << fixed << setprecision(10) << ((double)a*x) << endl;
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
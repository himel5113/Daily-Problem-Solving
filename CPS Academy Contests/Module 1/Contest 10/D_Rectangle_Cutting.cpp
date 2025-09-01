#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, m; cin >> n >> m;
    if((n&1 && m&1) || (n == 1 && m == 1)) {
        cout << "No\n"; return;
    }
    if((n == 1 && (m/2) == n) || (m == 1 && (n/2) == m)) {
        cout << "No\n"; return;
    }
    if(n&1 && (m/2) == n) {
        cout << "No\n"; return;
    }
    if(m&1 && (n/2) == m) {
        cout << "No\n"; return;
    }
    cout << "Yes\n";
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
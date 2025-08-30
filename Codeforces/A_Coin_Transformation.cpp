#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    ll n; cin >> n;
    if(n <= 3) {
        cout << 1 << '\n'; return;
    }
    ll cnt = 0;
    while(n > 3) {
        n /= 4; cnt++;
    }
    // bug(cnt);
    cout << (1 << cnt) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
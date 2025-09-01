#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
ll n, m;

bool check(ll mid) {
    return (n ^ mid) > m;
}

void solve() {
    cin >> n >> m;
    if(n > m) {
        cout << "0\n";
        return;
    }
    ll l = 0, r = 1e18, ans = -1;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(check(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
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
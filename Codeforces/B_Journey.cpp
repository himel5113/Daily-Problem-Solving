#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, a, b, c; cin >> n >> a >> b >> c;
    ll sum = (a + b + c);
    int ans = (n / sum) * 3;
    int baki = (n % sum);
    if(baki > 0) {
        baki -= a; ans++;
    }
    if(baki > 0) {
        baki -= b; ans++;
    }
    if(baki > 0) {
        baki -= c; ans++;
    }
    // bug(ans);
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
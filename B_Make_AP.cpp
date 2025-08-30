#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

bool checkAP(ll a, ll b, ll c) {
    return ((b - a) == (c - b));
}

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll x = (2 * b - c) / a;
    ll y = (a + c) / (2 * b);
    ll z = (2 * b - a) / c;

    if(checkAP(a, b, c)) {
        cout << "YES\n";
    }
    else if(checkAP(a * x, b, c) and x > 0) {
        cout << "YES\n";
    }
    else if(checkAP(a, b * y, c) and y > 0) {
        cout << "YES\n";
    }
    else if(checkAP(a, b, c * z) and z > 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
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
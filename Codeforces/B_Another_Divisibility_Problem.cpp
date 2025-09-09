#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

ll dig(int y) {
    ll cnt = 1;
    while (y) {
        cnt *= 10;
        y /= 10;
        // cnt++;
    }
    return cnt;
}

bool check(int x, int y) {
    // ll num = (x * pow(10, dig(x))) + y;
    ll num = (x * dig(y)) + y;
    ll temp = x + y;
    return num % temp == 0;
}

void solve() {
    ll x; cin >> x;
    for(ll i = 1; i <= 10; i++) {
        if(check(x, x * i)) {
            cout << x * i << '\n';
            return;
        }
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
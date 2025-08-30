#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int x, y, n; cin >> x >> y >> n;
    int r = n % x;
    if(y > r) {
        cout << n - r - x + y << '\n';
    }
    else if(r == y) {
        cout << n << '\n';
    }
    else {
        cout << n - r + y << '\n';
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
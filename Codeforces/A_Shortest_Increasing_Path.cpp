#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int x, y; cin >> x >> y;
    if(y == 1) {
        cout << "-1\n";
        return;
    }
    if(x < y) {
        cout << "2\n";
    }
    else {
        if(x - 1 <= y) {
            cout << "-1\n";
        }
        else {
            cout << "3\n";
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
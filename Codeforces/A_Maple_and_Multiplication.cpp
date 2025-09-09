#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int a, b; cin >> a >> b;
    if(a == b) {
        cout << "0\n";
        return;
    }
    if(a < b and (b % a == 0)) {
        cout << "1\n";
        return;
    }
    if(a > b and (a % b == 0)) {
        cout << "1\n";
        return;
    }
    cout << "2\n";
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
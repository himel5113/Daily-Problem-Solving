#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int a, b; cin >> a >> b;
    if(a == 1 and b == 1) {
        cout << "0\n"; return;
    }
    int cnt = 0;
    while(a > 0 and b > 0) {
        if(a <= b) {
            a += 1;
            b -= 2;
            cnt++;
        }
        else {
            a -= 2;
            b += 1;
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
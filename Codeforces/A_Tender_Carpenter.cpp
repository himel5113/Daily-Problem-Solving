#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

bool checkTriangle(ll a, ll b) {
    if(a < b) {
        return (2 * a > b);
    }
    else {
        return (2 * b > a);
    }
}

void solve() {
    int n; cin >> n;
    vector<ll> V(n + 2, 0);

    for(int i = 1; i <= n; i++) cin >> V[i];
    bool f = false;
    for(int i = 1; i <= n; i++) {
        if(checkTriangle(V[i], V[i-1]) or checkTriangle(V[i], V[i+1])) {
            f = true; break;
        }
    }
    cout << (f ? "YES\n" : "NO\n");
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
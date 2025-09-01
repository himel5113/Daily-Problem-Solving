#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void fun(ll n) {
    cout << n << ' ';
    if(n == 1) return;
    if(n & 1) fun(3 * n + 1);
    else fun(n >> 1);
}

void solve() {
    ll n; cin >> n;
    fun(n);
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
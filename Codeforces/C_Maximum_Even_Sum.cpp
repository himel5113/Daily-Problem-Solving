#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

ll check(ll a, ll b, ll k) {
    return (a * k) + (b / k);
}

void solve() {
    ll a, b; cin >> a >> b;
    if(b&1 and a&1) {
        cout << a * b + 1 << '\n';
        return;
    }
    if(b&1 and a % 2 == 0) {
        cout << "-1\n";
        return;
    }
    int cnt = 0, k = b;
    while(k % 2 == 0) {
        k /= 2;
        cnt++;
    }
    // bug(cnt);
    // if(cnt == 0) {
    //     cout << "-1\n";
    //     return;
    // }
    ll x = (a * (1 << (cnt - 1))) + (b / (1 << (cnt - 1)));
    ll y = 0;

    
    ll m = b / 2;
    ll val = check(a, b, m);
    if(val % 2 == 0) {
        y = val;
    }



    // bug(x); bug(y);
    ll ans = max(x, y);
    cout << (ans&1 ? -1 : ans) << '\n';
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
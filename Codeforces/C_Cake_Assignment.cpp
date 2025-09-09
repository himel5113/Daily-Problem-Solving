#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    ll k, x; cin >> k >> x;
    ll t = 1ULL << (k + 1);
    ll st = 1ULL << k;
    if(st == x) {
        cout << "0\n";
        return;
    }
    ll a = x, b = t - x;
    // bug(a); bug(b);
    vector<int> ans;
    if(a == b) {
        cout << "0\n";
        return;
    }
    while(a != b) {
        if(a < b) {
            ans.push_back(1);
            b -= a;
            a *= 2;
        }
        else {
            ans.push_back(2);
            a -= b;
            b *= 2;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto x : ans) cout << x << ' ';
    cout << '\n';
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
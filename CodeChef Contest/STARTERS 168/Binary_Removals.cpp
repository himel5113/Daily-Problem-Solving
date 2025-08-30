#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    ll n, x, k; cin >> n >> x >> k;
    string s; cin >> s;
    ll cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') cnt1++;
        else cnt2 += cnt1;
    }
    // bug(cnt1);
    // bug(cnt2);
    if(cnt2 <= x and cnt2 % k == 0) {
        cout << "1\n";
    }
    else {
        cout << "2\n";
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
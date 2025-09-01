#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    if(n <= 28) {
        string ans = "aa";
        ans += ('a' + (n-3));
        cout << ans << endl;
    }
    else if(n > 26 && n%26 == 0) {
        ll x = n/26;
        if(x == 2) cout << "ayz\n";
        else cout << "zzz\n";
    }
    else {
        ll x = n/26, t = n%26;
        if(x == 1) {
            string ans = "a";
            ans += ('a'+(t-2));
            ans += 'z';
            cout << ans << endl;
        }
        else {
            string ans = "";
            ans += ('a'+(t-1));
            ans += "zz";
            cout << ans << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    map<string, ll> mp;
    ll n;
    while(cin >> n && n) {
        ll maxii = 0; string ans = "";
        mp.clear();
        while(n--) {
            string s; cin >> s;
            mp[s]++;
            if(mp[s] > maxii) {
                maxii = mp[s]; ans = s;
            }
        }
        cout << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
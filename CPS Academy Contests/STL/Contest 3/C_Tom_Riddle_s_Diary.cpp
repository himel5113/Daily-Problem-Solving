#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

map<string, ll> mp;
void solve() {
    string s; cin >> s;
    cout << (mp[s] > 0 ? "YES\n" : "NO\n");
    mp[s]++;
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
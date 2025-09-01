#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n, k; cin >> n >> k;
    string s = "", ans = "";
    char ch = 'a';
    for(ll i=0; i<k; i++) {
        s += (ch+i);
    }
    for(ll i=0; i<n; i++) ans += s;
    cout << ans << endl;
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
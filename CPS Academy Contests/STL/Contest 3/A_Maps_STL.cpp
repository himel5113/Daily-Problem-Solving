#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

map<string, ll> mp;

void solve() {
    ll type; cin >> type;
    if(type == 1) {
        string s; ll x;
        cin >> s >> x;
        mp[s] += x;
    }
    if(type == 2) {
        string s; cin >> s;
        mp[s] = 0;
    }
    if(type == 3) {
        string s; cin >> s;
        cout << mp[s] << endl;
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
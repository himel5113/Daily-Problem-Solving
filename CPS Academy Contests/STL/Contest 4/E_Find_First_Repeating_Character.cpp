#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s; cin >> s;
    map<char, ll> mp;
    for(auto c : s) mp[c]++;
    for(auto c : s) {
        if(mp[c] > 1) {
            cout << c << endl; return;
        }
    }
    cout << ".\n";
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
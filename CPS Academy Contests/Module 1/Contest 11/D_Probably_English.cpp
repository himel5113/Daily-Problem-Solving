#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    vector<string> V(n);
    for(auto &x : V) cin >> x;
    set<string> st = {"and", "not", "that", "the","you"};
    for(auto c : V) {
        if(st.count(c)) {
            cout << "Yes\n"; return;
        }
    }
    cout << "No\n";
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
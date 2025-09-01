#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    map<int, int> mp;
    int i = 0, j = 0;
    ll ans = 0;
    while(i < n) {
        mp[V[i]]++;
        while(mp.size() > k) {
            if(mp[V[j]] == 1) {
                mp.erase(V[j]);
            }
            else {
                mp[V[j]]--;
            }
            j++;
        }
        ans += (i - j + 1);
        i++;
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
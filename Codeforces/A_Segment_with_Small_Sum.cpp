#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; ll k; cin >> n >> k;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    int ans = 0, j = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        while(j < n and sum + V[j] <= k) {
            sum += V[j];
            j++;
        }
        ans = max(ans, (j - i));
        sum -= V[i];
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
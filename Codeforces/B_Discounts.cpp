#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(k);
    ll tot = 0;
    for(auto &x : a) cin >> x, tot += x;
    for(auto &x : b) cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());

    int sz = n, j = 0, it = 0;
    ll free = 0;
    for(int i = 0; i < n; i++) {
        if(j >= k) break;
        int bi = b[j];
        it += bi;

        if(it > n or bi > sz) break;

        // bug(j);
        // bug(sz);
        // bug(bi);
        // bug(it);

        // bug(a[it - 1]);
        
        if(bi == 1) {
            // bug(it);
            // bug(a[it]);
            free += a[it - 1];
            // it++;
            sz--;
            j++;
        }
        else {
            // it += (bi - 1);
            // bug(it);
            // bug(a[it]);
            free += a[it - 1];

            sz--;
            j++;
        }
    }
    // bug(tot); bug(free);
    cout << tot - free << "\n";
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
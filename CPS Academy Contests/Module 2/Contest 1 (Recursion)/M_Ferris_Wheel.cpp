#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> V(n);
    for(auto &x : V) cin >> x;

    sort(V.begin(), V.end());

    int l = 0, r = n - 1;
    int cnt = 0;
    while(l <= r) {
        if(V[l] + V[r] <= x) {
            cnt++;
            l++;
            r--;
        }
        else {
            cnt++;
            r--;
        }
    }
    cout << cnt << '\n';
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
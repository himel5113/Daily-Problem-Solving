#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), odd, even;
    for(auto &x : V) {
        cin >> x;
        (x&1 ? odd.push_back(x) : even.push_back(x));
    }
    ll sum1 = accumulate(even.begin(), even.end(), 0LL), sum2 = accumulate(odd.begin(), odd.end(), 0LL);
    if(sum1 % 2 == 0 and sum2 % 2 == 0) {
        cout << sum1 + sum2 << '\n';
        return;
    }
    sort(odd.begin(), odd.end());
    for(int i = 0; i < n; i++) {
        sum2 -= odd[i];
        if(sum2 % 2 == 0) break;
    }
    cout << sum1 + sum2 << '\n';
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
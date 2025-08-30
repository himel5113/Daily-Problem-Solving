#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, q; cin >> n >> q;
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        dq.push_back(x);
    }
    while(q--) {
        int x; cin >> x;
        int y = find(dq.begin(), dq.end(), x) - dq.begin();
        cout << y + 1 << ' ';
        dq.erase(dq.begin() + y);
        dq.push_front(x);
    }
    cout << '\n';
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
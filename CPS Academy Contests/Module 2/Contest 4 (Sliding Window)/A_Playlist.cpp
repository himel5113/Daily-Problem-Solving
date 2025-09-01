#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    deque<int> dq;
    map<int, int> mp;
    int max_len = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(mp[V[i]] == 1) {
            while(1) {
                int x = dq.front();
                dq.pop_front();
                mp[x] = 0;
                if(x == V[i]) break;
            }
        }
        dq.push_back(V[i]);
        mp[V[i]] = 1;

        max_len = max(max_len, (int)dq.size());
    }
    cout << max(max_len, (int)dq.size()) << '\n';
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
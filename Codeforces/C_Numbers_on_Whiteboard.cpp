#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    priority_queue<int> pq;
    for(int i = 1; i <= n; i++) {
        pq.push(i);
    }
    vector<pair<int, int>> pr;
    while(pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        // bug(a);
        // bug(b);
        pr.push_back({a, b});
        int t = (a + b + 1) / 2;
        pq.push(t);
    }
    cout << pq.top() << '\n';
    for(auto [x, y] : pr) {
        cout << x << ' ' << y << '\n';
    }
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
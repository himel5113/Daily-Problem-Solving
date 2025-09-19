#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    vector<int> evens, odds;
    for(auto i : V) {
        if(i & 1) odds.push_back(i);
        else evens.push_back(i);
    }
    if(odds.empty()) {
        cout << "0\n";
        return;
    }
    sort(odds.begin(), odds.end(), greater<int>());
    ll sum = accumulate(evens.begin(), evens.end(), 0LL);
    int t = ceil(odds.size() / 2.0);
    for(int i = 0; i < t; i++) {
        sum += odds[i];
    }
    cout << sum << '\n';
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
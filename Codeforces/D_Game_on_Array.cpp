#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    map<int, int> mp;
    for(auto &x : V) cin >> x, mp[x]++;
    vector<pair<int, int>> pr;
    for(auto x : mp) {
        pr.push_back({x.first, x.second});
    }

    sort(pr.begin(), pr.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if(a.second == b.second) return a.first > b.first;
        return a.second > b.second;
    });

    ll alice = 0, bob = 0;
    int f = 1;
    for(int i = 0; i < (int)pr.size(); i++) {
        if(f) {
            int a = (int)ceil(pr[i].first / 2.0), b = (int)pr[i].first / 2;
            alice += (1LL * a * pr[i].second);
            bob += (1LL * b * pr[i].second);
        }
        else {
            int a = (int)ceil(pr[i].first / 2.0), b = (int)pr[i].first / 2;
            alice += (1LL * b * pr[i].second);
            bob += (1LL * a * pr[i].second);
        }
        if(pr[i].first & 1) f ^= 1;
    }
    cout << alice << ' ' << bob << '\n';

    // for(auto x : pr) {
    //     cout << x.first << ' ' << x.second << '\n';
    // }cout << '\n';
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
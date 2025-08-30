#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<string> V(n);
    for(auto &x : V) cin >> x;
    sort(V.begin(), V.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });
    // for(auto i : V) cout << i << '\n';
    bool f = true;
    for(int i = 0; i < n-1; i++) {
        if(V[i + 1].find(V[i]) == string::npos) {
            f = false; break;
        }
    }
    if(f) {
        cout << "YES\n";
        for(auto i : V) cout << i << '\n';
    }
    else {
        cout << "NO\n";
    }
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
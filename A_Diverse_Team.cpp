#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> V(n), temp;
    for(auto &x : V) cin >> x;
    set<int> st(V.begin(), V.end());
    if(st.size() < k) {
        cout << "NO\n"; return;
    }
    st.clear();
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
        if(st.count(V[i]) == 0) {
            temp.push_back(i + 1);
            st.insert(V[i]);
        }
    }
    for(int i = 0; i < k; i++) cout << temp[i] << ' '; cout << '\n';
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
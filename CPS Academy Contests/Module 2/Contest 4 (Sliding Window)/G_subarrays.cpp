#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    int k; cin >> k;

    multiset<int> st;
    for(int i = 0; i < k; i++) {
        st.insert(V[i]);
    }

    for(int i = 0; i <= n - k; i++) {
        cout << *st.rbegin() << ' ';
        st.erase(st.find(V[i]));
        if(i + k < n) {
            st.insert(V[i + k]);
        }
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
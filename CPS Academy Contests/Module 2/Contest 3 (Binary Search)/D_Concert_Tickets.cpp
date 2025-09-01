#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int n, q; cin >> n >> q;
    multiset<int> st;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    while(q--) {
        int x; cin >> x;
        auto d = st.upper_bound(x);
        // bug(*d);
        if(d == st.begin()) {
            cout << "-1\n";
        }
        else {
            d--;
            cout << *d << '\n';
            st.erase(d);
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
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

stack<int> st;
void solve() {
    int t; cin >> t;
    if(t == 1) {
        int x; cin >> x;
        if(st.empty()) {
            st.push(x);
        }
        else {
            st.push(max(x, st.top()));
        }
    }
    else if(t == 2) {
        st.pop();
    }
    else {
        cout << st.top() << '\n';
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
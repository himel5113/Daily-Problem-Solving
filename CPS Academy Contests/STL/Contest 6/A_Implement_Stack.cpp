#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

stack<int> st;

void solve() {
    string s; cin >> s;
    if(s == "push") {
        int x; cin >> x;
        st.push(x);
    }
    else {
        if(!st.empty()) {
            int top = st.top();
            cout << top << '\n';
            st.pop();
        }
        else {
            cout << "Empty\n";
        }
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
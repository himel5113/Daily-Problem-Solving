#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    stack<char> st;
    string s; cin >> s;
    for(auto c : s) {
        if(st.empty()) {
            st.push(c);
        }
        else {
            if(c == st.top()) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
    }

    string t = "";
    while(!st.empty()) {
        t += st.top();
        st.pop();
    }
    reverse(t.begin(), t.end());
    cout << t << '\n';
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
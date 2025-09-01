#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    string s; cin >> s;
    stack<char> st;
    for(auto c : s) {
        if(st.empty()) {
            st.push(c);
        }
        else {
            if(c == ')' and st.top() == '(') {
                st.pop();
            }
            else if(c == '}' and st.top() == '{') {
                st.pop();
            }
            else if(c == ']' and st.top() == '[') {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
    }

    cout << (st.size() ? "NO\n" : "YES\n");
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
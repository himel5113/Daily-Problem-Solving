#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s;
    while(getline(cin, s)) {
        if(s == "#") break;
        string t = "";
        set<string> st;
        for(auto c : s) {
            if(c == ' ' && !t.empty()) {
                st.insert(t); t = "";
            }
            else {
                t += c;
            }
        } st.insert(t);
        cout << st.size() << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
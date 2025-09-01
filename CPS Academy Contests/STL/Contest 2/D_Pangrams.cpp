#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    string s; getline(cin, s);
    set<char> st;
    for(auto c : s) {
        if(isalpha(c)) st.insert(tolower(c));
    }
    cout << (st.size() == 26 ? "pangram\n" : "not pangram\n");
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
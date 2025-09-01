#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

bool isTrue(string s) {
    string t = "";
    for(ll i=0; i<s.size(); ) {
        if(s[i] == s[i+1]) i++;
        else t += s[i], i++;
    }
    return (t == "meow");
}

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> st(s.begin(), s.end());
    cout << ((st.size() == 4 && isTrue(s)) ? "YES\n" : "NO\n"); 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
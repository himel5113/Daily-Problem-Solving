#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    string s; cin >> s;
    int cnt_0 = 0, cnt_1 = 0;
    for(auto c : s) {
        (c == '0' ? cnt_0++ : cnt_1++);
    }
    if(cnt_0) {
        int i = 0;
        for(i = 0; i < s.size(); i++) {
            if(s[i] == '0') break;
        }
        for(int j = 0; j < s.size(); j++) {
            if(j == i) continue;
            else cout << s[j];
        }
        cout << '\n';
    }
    else {
        s.pop_back();
        cout << s << '\n';
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
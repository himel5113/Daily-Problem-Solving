#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;


void solve() {
    string s; cin >> s;
    int ans = INT_MAX;
    int i = 0, j = 0;
    map<char, int> mp;
    while(i < s.size()) {
        while(mp.size() < 3 and i < s.size()) {
            mp[s[i]]++; i++;
        }

        while(mp.size() == 3) {
            ans = min(ans, i - j);
            if(mp[s[j]] == 1) {
                mp.erase(s[j]);
            }
            else {
                mp[s[j]]--;
            }
            j++;
        }
    }
    cout << (ans == INT_MAX ? 0 : ans) << '\n';
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
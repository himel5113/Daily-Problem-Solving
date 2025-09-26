#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    map<int, int> mp;
    for(auto &x : V) cin >> x, mp[x]++;
    if(mp.size() == 1) {
        cout << n << '\n';
        return;
    }
    set<int> st;
    for(auto i : mp) {
        st.insert(i.second);
    } 
    if(st.size() == 1) {
        cout << n << '\n';
        return;
    }

    vector<int> freq;
    for(auto i : mp) {
        freq.push_back(i.second);
    }
    sort(freq.begin(), freq.end(), greater<int>());
    int ans = 0;
    int maxx = freq[0];
    for(int i = 1; i <= maxx; i++) {
        int cnt = 0;
        for(auto f : freq) {
            if(f >= i) cnt++;
        }
        ans = max(ans, cnt * i);
    }
    cout << ans << '\n';
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
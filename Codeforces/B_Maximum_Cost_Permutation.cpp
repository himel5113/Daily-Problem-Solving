#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), temp(n), sm, lr;
    map<int, int> mp;
    deque<int> baki;
    for(auto &x : V) cin >> x, mp[x]++;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(V[i - 1] == 0) cnt++;
        temp[i - 1] = i;
        if(!mp.count(i)) {
            baki.push_back(i);
        }
    }
    // bug(cnt);
    // for(auto i : temp) cout << i << ' '; cout << '\n';
    // for(auto i : baki) cout << i << ' '; cout << '\n';
    if(baki.size() == n && n != 1) {
        cout << n << '\n';
        return;
    }
    sort(baki.begin(), baki.end());

    if(baki.size() == 1) {
        for(int i = 0; i < n; i++) {
            if(V[i] == 0) {
                int z = baki.back();
                V[i] = z;
                baki.pop_back();
            }
            if(baki.empty()) break;
        }
    }
    
    // for(auto i : V) cout << i << ' '; cout << '\n';
    int l = -1, r = -1;
    for(int i = 0; i < n; i++) {
        if(V[i] != i + 1) {
            l = i; break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(V[i] != i + 1) {
            r = i; break;
        }
    }
    if(l == -1 and r == -1) {
        cout << "0\n"; return;
    }
    cout << r - l + 1 << '\n';
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
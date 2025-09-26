#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    set<char> st(s.begin(), s.end());
    if(st.size() == 1) {
        cout << "YES\n";
        if(*st.begin() == '1') {
            for(int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << '\n';
        }
        else {
            if(n % 2 == 0) {
                for(int i = n; i >= 1; i--) {
                    cout << i << " ";
                }
                cout << '\n';
            }
            else {
                for(int i = 0; i < n - 1; i++) {
                    cout << i + 2 << ' ';
                }
                cout << 1 << '\n';
            }
        }
        return;
    }

    if(s[0] == '0' and s[1] == '1') {
        cout << "NO\n";
        return;
    }
    if(s[n-1] == '0' and s[n-2] == '1') {
        cout << "NO\n";
        return;
    }
    for(int i = 1; i < n - 1; i++) {
        if(s[i] == '0' and s[i - 1] == '1' and s[i + 1] == '1') {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    vector<int> ans(n + 1, 0);
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            ans[i + 1] = i + 1;
        }
    }
    
    int i = 0;
    while(i < n) {
        if(s[i] == '1') {
            i++; continue;
        }
        int j = i;
        while(j < n and s[j] == '0') j++;
        for(int k = i; k < j - 1; k++) {
            ans[k + 1] = k + 2;
        } 
        ans[j] = i + 1;
        i = j;
    }
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';
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
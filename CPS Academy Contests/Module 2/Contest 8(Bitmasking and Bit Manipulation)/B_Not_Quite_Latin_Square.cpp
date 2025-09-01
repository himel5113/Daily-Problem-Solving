#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    vector<vector<char> > S(3, vector<char>(3));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> S[i][j];
        }
    }
    map<char, int> mp;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            char x = S[i][j];
            if(x == 'A') mp['A']++;
            else if(x == 'B') mp['B']++;
            else if(x == 'C') mp['C']++;
        }
    }
    for(auto [x, y] : mp) {
        if(y < 3) {
            cout << x << '\n';
            return;
        }
    }
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
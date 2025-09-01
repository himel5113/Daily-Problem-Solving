#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

queue<int> q;

void solve() {
    string s; cin >> s;
    if(s == "Enqueue") {
        int x; cin >> x;
        q.push(x);
    }
    else {
        if(!q.empty()) {
            int top = q.front();
            cout << top << '\n';
            q.pop();
        }
        else {
            cout << "Empty\n";
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
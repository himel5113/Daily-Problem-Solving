#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

deque<int> dq;

void solve() {
    string s; cin >> s;
    if(s == "push_back") {
        int x; cin >> x;
        dq.push_back(x);
    }
    else if(s == "push_front") {
        int x; cin >> x;
        dq.push_front(x);
    }
    else {
        if(!dq.empty()) {
            if(s == "pop_back") {
                int t = dq.back();
                cout << t << '\n';
                dq.pop_back();
            }
            else {
                int t = dq.front();
                cout << t << '\n';
                dq.pop_front();
            }
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
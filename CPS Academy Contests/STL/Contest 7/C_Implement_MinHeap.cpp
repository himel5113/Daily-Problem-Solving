#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

priority_queue<int, vector<int>, greater<int>> pq;
void solve() {
    string type; cin >> type;
    if(type == "insert") {
        int x; cin >> x;
        pq.push(x);
    }
    else if(type == "getMin") {
        if(!pq.empty()) {
            cout << pq.top() << '\n';
        }
        else {
            cout << "Empty\n";
        }
    }
    else {
        if(!pq.empty()) {
            pq.pop();
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
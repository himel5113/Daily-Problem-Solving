#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    priority_queue<int> pq;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x; pq.push(x);
    }
    
    vector<int> ans;
    while(!pq.empty()) {
        int t = pq.top();
        pq.pop(); 
        ans.push_back(t);
        t /= 2;
        if(t > 0) pq.push(t);
    }
    for(auto i : ans) cout << i << ' '; cout << '\n';
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
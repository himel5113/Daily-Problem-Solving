#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    deque<int> dq(n);
    for(auto &x : dq) cin >> x;
    sort(dq.begin(), dq.end());
    vector<int> ans, pre(n);
    if(dq.back() == 2) {
        ans.push_back(2);
        dq.pop_back();
        pre[0] = 2;
    }
    else {
        ans.push_back(dq.back());
        dq.pop_back();
        pre[0] = 1;
    }

    for(int i = 1; i < n - 1; i++) {
        int x = dq.front(), y = dq.back();
        if(isPrime(pre[i - 1] + x)) {
            ans.push_back(x);
            dq.pop_front();
            pre[i] = pre[i - 1] + x;
        }
        else if(isPrime(pre[i - 1] + y)){
            ans.push_back(y);
            dq.pop_back();
            pre[i] = pre[i - 1] + y;
        }
        else {
            ans.push_back(y);
            dq.pop_back();
            pre[i] = pre[i - 1] + y;
        }
    }
    while(!dq.empty()) {
        ans.push_back(dq.back());
        dq.pop_back();
    }

    for(auto i : ans) cout << i << ' '; cout << '\n';
    // for(int i = 0; i < n; i++) {
    //     cout << pre[i] << ' ';
    // }
    // cout << '\n';
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
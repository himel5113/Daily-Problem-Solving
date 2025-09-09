#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

const int N = 1e6 + 5;
set<int> st;
vector<pair<int, int>> pr;
vector<int> V[N];

int factors(int n) {
    st.clear();
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) {
            while(n % i == 0) {
                st.insert(i);
                n /= i;
            }
        }
    }
    if(n > 1) st.insert(n);
    return st.size();
}


void solve() {
    int a, b, n; cin >> a >> b >> n;
    cout << (upper_bound(V[n].begin(), V[n].end(), b) - lower_bound(V[n].begin(), V[n].end(), a)) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 1; i < N; i++) {
        V[factors(i)].push_back(i);
    }

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
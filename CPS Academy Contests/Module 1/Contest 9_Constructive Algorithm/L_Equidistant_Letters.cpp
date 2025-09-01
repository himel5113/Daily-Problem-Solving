#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}
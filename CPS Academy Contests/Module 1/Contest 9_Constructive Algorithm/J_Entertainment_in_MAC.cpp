#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    string t = s; reverse(t.begin(), t.end());
    ll x = lexicographical_compare(s.begin(), s.end(), t.begin(), t.end());
    if(s == t) {
        cout << s << endl; return;
    }
    cout << (x ? s : (t+s)) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}
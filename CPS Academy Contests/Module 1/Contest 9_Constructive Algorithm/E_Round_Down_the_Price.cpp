#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    string s = to_string(n);
    ll x = s[0]-'0';
    string temp = "";
    if(n < 10) {
        cout << x-1 << endl; return;
    }
    if(n == 10) {
        cout << 0 << endl; return;
    }
    if((x-1) > 0) {
        string t = to_string(x-1);
        temp += t;
        temp += s.substr(1, (int)s.size());
    }
    else {
        temp += s.substr(1, (int)s.size());
    }
    ll ans = stoll(temp);
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}
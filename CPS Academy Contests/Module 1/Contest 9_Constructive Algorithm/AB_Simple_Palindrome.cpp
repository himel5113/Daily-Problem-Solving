#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    string s = "aeiou";
    if(n <= 5) {
        cout << s.substr(0, n) << endl; return;
    }
    ll x = n/5, y = n%5;
    string ans = "";
    for(ll i=1; i<=x; i++) {
        ans += s;
    }
    string temp = "";
    if(y == 1) {
        temp += s[0];
    }
    if(y == 2) {
        temp += s.substr(0, 2);
    }
    if(y == 3) {
        temp += s.substr(0, 3);
    }
    if(y == 4) {
        temp += s.substr(0, 4);
    }
    ans += temp;
    sort(ans.begin(), ans.end());
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
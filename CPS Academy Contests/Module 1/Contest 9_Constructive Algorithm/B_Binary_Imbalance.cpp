#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll cnt1 = 0, cnt0 = 0;
    for(auto c : s) {
        (c == '0') ? cnt0++ : cnt1++;
    }
    if(cnt0 > cnt1 || cnt0 == n) {
        cout << "YES\n"; return;
    }
    if(cnt1 == n) {
        cout << "NO\n"; return;
    }
    bool f = 0;
    for(ll i=0; i<n-1; i++) {
        // t += (s[i] == s[i+1] ? '1' : '0');
        if(s[i] != s[i+1]) f = 1;
    }
    // for(auto c : t) {
    //     // (c == '0') ? cnt0++ : cnt1++;
    // }
    cout << (f ? "YES\n" : "NO\n"); 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}
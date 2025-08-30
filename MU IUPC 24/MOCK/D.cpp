#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ca = 1;

void solve() {
    string s; cin >> s;
    string t = "";
    for(auto c : s) {
        if(isalpha(c)) continue;
        t += c;
    }
    ll x = stoll(t);
    cout << x+1 << "ffy\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

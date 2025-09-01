#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void solve() {
    string s, t, k; 
    getline(cin, s); getline(cin, t); getline(cin, k);
    ll a = 0, b = 0, c = 0;
    for(auto i : s) {
        a += (isVowel(i));
    }
    for(auto i : t) {
        b += (isVowel(i));
    }
    for(auto i : k) {
        c += (isVowel(i));
    }
    cout << (a == 5 && b == 7 && c == 5 ? "YES\n" : "NO\n");
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
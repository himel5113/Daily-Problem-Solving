#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

bool check_special(string &s) {
    for(auto c : s) {
        if(c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '+')
        return true;
    }
    return false;
}
bool check_num(string &s) {
    for(auto c : s) {
        if(isdigit(c)) return true;
    }
    return false;
}
bool check_char_U(string &s) {
    for(auto c : s) {
        if(isupper(c)) return true;
    }
    return false;
}
bool check_char_L(string &s) {
    for(auto c : s) {
        if(islower(c)) return true;
    }
    return false;
}

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    
    ll cnt = 0;
    cnt += (!check_char_L(s));
    cnt += (!check_char_U(s));
    cnt += (!check_num(s));
    cnt += (!check_special(s));

    cout << cnt;
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
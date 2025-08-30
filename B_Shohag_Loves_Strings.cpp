#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
#define all(V) (V).begin(), (V).end()
#define bug(a) cout << #a << " : " << a << endl;
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define mxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    set<char> st;
    for(auto c : s) st.insert(c);
    if(n == 1) {
        cout << -1 << endl; return;
    }
    if(n == 2) {
        if(s[0] == s[1]) cout << s << endl;
        else cout << "-1\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
            if(s[i] == s[i+1]) {
                cout << s[i] << s[i+1] << endl; return;
            }
        }

    for(ll i=0; i<n-2; i++) {
        if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]) {
            cout << s[i] << s[i+1] << s[i+2] << endl; return;
        }
    }
    cout << -1 << endl;
}

int32_t main() {
    opt();
    ll t = 1; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
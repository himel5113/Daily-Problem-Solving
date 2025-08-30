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
    ll n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    ll cnt_0 = 0, cnt_1 = 0, con_0 = 0, cnt = 0;
    for(auto c : s) {
        if(c == '0') cnt_0++;
        else cnt_1++;
    }
    if(n == 1 && k == 1) {
        cout << cnt_0 << endl; return;
    }
    for(ll i=0; i<n; i++) {
        if(s[i] == '0') {
            cnt++;
            if(cnt == m) {
                cnt = 0; con_0++;
            }
        }
        else {
            if(cnt == m) {
                cnt = 0; con_0++;
            }
            else cnt = 0;
        }
    }
    // cout << con_0 << endl;

    if(con_0 == 0) {
        cout << 0 << endl; 
    }
    else {
        ll cnt1 = 0;
        ll ans = 0;
        for(ll i=0; i<n; i++) {
            (s[i] == '0' ? cnt1++ : cnt1 = 0);
            if(cnt1 == m) {
                i += (k-1); cnt1 = 0; ans++;
            }
        }
        cout << ans << endl;
    }
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
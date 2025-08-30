#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define fi first
#define se second 
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
#define tc() ll t;cin>>t;while(t--)
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

/*void solve() {
    ll n; cin >> n; 
    string s = "aeiou", ans = "";
    if(n < 6) {
        for(ll i=0; i<n; i++) ans += s[i];
        cout << ans << endl; return;
    } 
    if(n%5 == 0) {
        ll x = n/5;
        for(ll i=0; i<5; i++) {
            for(ll j=0; j<x; j++) {
                ans += s[i];
            }
        }
        cout << ans << endl; return;
    }
    ll x = n/5, y = n%5;
    for(ll i=0; i<5; i++) {
        string temp = "";
        for(ll j=0; j<x; j++) {
            ans += s[i];
        }
        if(i < y) ans += s[i];
        // cout << ans << "/";
    } 
    cout << ans << endl;
} */

void solve() {
    ll n; cin >> n; 
    string s = "aeiou", ans = "";
    if(n < 6) {
        for(ll i=0; i<n; i++) ans += s[i];
        cout << ans << endl; return;
    } 
    if(n%5 == 0) {
        ll x = n/5;
        for(ll i=0; i<5; i++) {
            for(ll j=0; j<x; j++) {
                ans += s[i];
            }
        }
        cout << ans << endl; return;
    }
    ll x = n/5, y = n%5;
    for(ll i=0; i<5; i++) {
        for(ll j=0; j<x; j++) {
            ans += s[i];
        }
    }
    // cout << ans << endl;
    string temp = "";
    if(y == 1) temp = s[0];
    if(y == 2) temp += s.substr(0, 2);
    if(y == 3) temp += s.substr(0, 3);
    if(y == 4) temp += s.substr(0, 4);
    ans += temp;
    sort(all(ans));
    cout << ans << endl;
    // cout << temp << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
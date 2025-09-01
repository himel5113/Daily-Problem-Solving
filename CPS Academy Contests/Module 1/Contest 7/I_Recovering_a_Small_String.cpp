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

void solve() {
    ll n; cin >> n;
    if(n <= 28) {
        string ans = "aa";
        ans += ('a' + (n-3));
        cout << ans << endl;
    }
    else if(n > 26 && n%26 == 0) {
        ll x = n/26;
        if(x == 2) cout << "ayz\n";
        else cout << "zzz\n";
    }
    else {
        ll x = n/26, t = n%26;
        if(x == 1) {
            string ans = "a";
            ans += ('a'+(t-2));
            ans += 'z';
            cout << ans << endl;
        }
        else {
            string ans = "";
            ans += ('a'+(t-1));
            ans += "zz";
            cout << ans << endl;
        }
    }
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
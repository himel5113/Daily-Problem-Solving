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

ll calc(ll a, ll b) {
    while(a%b == 0) a /= b;
    return a;
}

void solve() {
    ll x, y, k; cin >> x >> y >> k;
    if(k == 1) {
        x++;
        if(x%y == 0) {
            cout << calc(x, y) << endl; return;
        }
        else {
            cout << x << endl; return;
        }
    }

    while(k) {
        if(x == 1) break;
        ll temp = y - (x%y);
        if(temp > k) {
            cout << x + k << endl; k = 0; return;
        }
        if(temp == k) {
            x += temp; k = 0;
            cout << calc(x, y) << endl; return;
        }
        else {
            x += temp; k -= temp;
            x = calc(x, y);
            temp = y - (x%y);
        }
    }
    if(k) cout << k%(y-1) + x << endl;
    else cout << x << endl;
} 


int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

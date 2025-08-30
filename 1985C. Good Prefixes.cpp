#include <bits/stdc++.h>

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

using namespace std;


void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    vector<ll> pre(n), maxi(n);
    pre[0] = V[0]; maxi[0] = V[0];
    for(ll i=1; i<n; i++) {
        pre[i] = pre[i-1] + V[i];
        maxi[i] = max(maxi[i-1], V[i]);
    }

    if(n == 1 && V[0] == 0) {
        cout << 1 << endl; return;
    }
    if(n == 1 && V[0]) {
        cout << 0 << endl; return;
    }

    // for(auto i : pre) cout << i << " "; cout << endl;
    // for(auto i : maxi) cout << i << " "; cout << endl;

    ll count = 0;
    if(V[0] == 0) count = 1;
    else count = 0;
    for(ll i=1; i<n; i++) {
        ll temp = pre[i] - maxi[i];
        if(temp == maxi[i]) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

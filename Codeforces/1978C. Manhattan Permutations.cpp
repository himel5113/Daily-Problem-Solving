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

const int MAX_SIZE = 2e5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

void solve() {
    ll n, k; cin >> n >> k;
    ll mx = 0;
    for(ll i=1, j=n; i<=n && j>=1; i++, j--) mx += abs(i-j);
    if(k&1 || k > mx) {
        NA; return;
    }
    if(n == 1) {
        if(k == 0) {
            HA; cout << 1 << endl; return;
        }
        else {
            NA; return;
        }
    }

    vector<ll> ans(n);
    if(k == 0) {
        HA;
        for(ll i=1; i<=n; i++) cout << i << " "; cout << endl; return;
    }

    for(ll i=1; i<=n; i++) ans[i-1] = i;

    if(k == 2) {
        swap(ans[0], ans[1]); k = 0;
    }
    
    ll l = 0, r = n-1; k /= 2;
    while(l < r) {
        ll temp = abs(l - r);
        if(temp <= k) {
            k -= (temp);
            swap(ans[l], ans[r]);
            l++; r--;
        }
        else l++;
        if(k == 0) break;
    }
    HA;
    for(auto i : ans) cout << i << " "; cout << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define allS(s) s.begin(), s.end()
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define fi first
#define se second 
#define pb(V) push_back(V)
#define ppb(V) pop_back(V)
#define maxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define tc() ll t;cin>>t;while(t--)
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define lcm(a, b) ((a * b) / __gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ld EPS = INT_MIN;

using namespace std;

ll divisors(ll n) {
    ll count = 0;
    for(ll i=1; i*i<=n; i++) {
        if(n%i==0) {
            count++;
            if(n/i != i) count++;
        }
    }
    return count;
}


void solve() {
    ll n; cin>>n;
    vector<ll> V(n);
    for(auto &x : V) cin>>x;
    ll ans = V[0];
    for(ll i=1; i<n; i++) {
        ans = __gcd(ans, V[i]);
    }
    cout<<divisors(ans)<<endl;
}

int main() {
    opt();
    //tc() {
        solve();
    //}
    return 0;
}

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
    ll n, m; cin>>n>>m;
    vector<ll> A(n), B(m), ans, temp;
    for(auto &x : A) cin>>x;
    for(auto &x : B) cin>>x;
    if(n < 4 || m < 4 || (m+n) < 11) {
        cout<<-1<<endl; return;
    }
    sort(all(A)); sort(all(B));
    reverse(all(A)); reverse(all(B));
    ll sum = 0;
    for(ll i=0; i<4; i++) sum += A[i];
    for(ll i=0; i<4; i++) sum += B[i];

    if(n > 4) {
        for(ll i=4; i<n; i++) temp.pb(A[i]);
    }
    if(m > 4) {
        for(ll i=4; i<m; i++) temp.pb(B[i]);
    }
    sort(all(temp), greater<ll>());

    for(ll i=0; i<3; i++) {
        sum += temp[i];
    }

    cout<<sum<<endl;

    // for(auto i : temp) cout<<i<<" "; cout<<endl;

}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
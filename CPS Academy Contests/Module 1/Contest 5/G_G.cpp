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
    ll n1, m1, n2, m2;
    cin >> n1 >> m1;
    ll mat1[n1][m1];
    for(ll i=0; i<n1; i++) {
        for(ll j=0; j<m1; j++) 
        cin >> mat1[i][j];
    }

    cin >> n2 >> m2;
    ll mat2[n2][m2];

    for(ll i=0; i<n2; i++) {
        for(ll j=0; j<m2; j++) 
        cin >> mat2[i][j];
    }

    // for(ll i=0; i<n1; i++) {
    //     for(ll j=0; j<m1; j++) 
    //     cout << mat1[i][j] << " "; cout << endl;
    // } cout << endl;
    // for(ll i=0; i<n2; i++) {
    //     for(ll j=0; j<m2; j++) 
    //     cout << mat2[i][j] << " "; cout << endl;
    // } cout << endl;

    ll ans[n1][m2];
    for(ll i=0; i<n1; i++) {
        for(ll j=0;j<m2; j++) ans[i][j] = 0;
    }
    for (ll i = 0; i < n1; i++) {
        for (ll j = 0; j < m2; j++) {
            for (ll k = 0; k < m1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(ll i=0; i<n1; i++) {
        for(ll j=0; j<m2; j++) {
            cout << ans[i][j] << " ";
        } cout << endl;
    }
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
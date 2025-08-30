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
    ll m, a, b, c; cin >> m >> a >> b >> c;
    ll row1_full = 0, row1_baki = 0, row2_full = 0, row2_baki = 0;
    if(m >= a) {
        row1_full = a;
        row1_baki = (m-a);
    }
    if(m >= b) {
        row2_full = b;
        row2_baki = (m-b);
    }   
    if(m < a) {
        row1_full = m;
        row1_baki = 0;
    }
    if(m < b) {
        row2_full = m;
        row2_baki = 0;
    }

// bug(row1_baki); bug(row2_baki);

    if(row1_baki == 0 && row2_baki == 0) {
        cout << row1_full+row2_full << endl; return;
    }

    if(row1_baki && c) {
        if(row1_baki >= c) {
            row1_baki = (row1_baki-c);
            row1_full += c; c = 0;
            // bug(c);
        }
        else {
            row1_full += row1_baki;
            c -= row1_baki;
            row1_baki = 0;
            // bug(c);
        }
    }
// bug(c);

    if(row2_baki && c) {
        if(row2_baki >= c) {
            row2_baki = (row2_baki-c);
            row2_full += c; c = 0;
        }
        else {
            row2_full += row2_baki;
            c -= row2_baki;
            row2_baki = 0;
        }
    }
// bug(row1_full); bug(row2_full);
    cout << row1_full+row2_full << endl;
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
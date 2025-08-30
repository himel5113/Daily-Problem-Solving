#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define fi first
#define se second 
#define pb push_back
#define ppb pop_back
#define HA cout<<"Yes"<<endl
#define NA cout<<"No"<<endl
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
    ll n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    pair<ll, ll> pr1{0, 0}, pr2{x, y};
    ll i = 0;
    ll d = n;
    while(n--) {
        if(s[i] == 'R') {
            pr1.fi++; //pr2.fi++;
        }
        else if(s[i] == 'L') {
            pr1.fi--; //pr2.fi--;
        }
        else if(s[i] == 'U') {
            pr1.se++; //pr2.se++;
        }
        else {
            pr1.se--; //pr2.se--;
        }
        i++;
    }
    // cout << pr1.fi << "/" << pr1.se << "--" << pr2.fi << "/" << pr2.se << endl;
    ll temp = abs(pr2.fi - pr1.fi);
    temp += abs(pr2.se - pr1.se);

    if(temp == d) HA;
    else {
        if(temp > d) NA;
        else {
            ll aa = d - temp;
            if(aa&1) NA;
            else HA;
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
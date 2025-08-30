#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define sortA(arr, size) sort(allA(arr, size))
#define revA(arr, size) reverse(allA(arr, size))
#define sortV(V) sort(allV(V))
#define revV(V) reverse(allV(V))
#define revS(s) reverse(s.begin(), s.end())
#define sumV(a) accumulate(a.begin(), a.end(), 0)
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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ld EPS = INT_MIN;

using namespace std;

ll binaryExpotential(ll base, ll power) {
    ll res=1;
    while(power>0) {
        if(power&1) {
            res *= base;
           // res %= MOD;
            power--;
        }
        else {
            base *= base;
           // base %= MOD;
            power >>= 1;
        }
    }
    return res;
}

void solve() {
    ll a, b, l;
    cin>>a>>b>>l;
    set<ll> ans;

    for(ll x=0; ; x++) {
            ll t1 = binaryExpotential(a, x);
            if(t1 > l) break;
        for(ll y=0; ; y++) {
                ll t2 = binaryExpotential(b, y);
                if(t2 > l) break;
                ll temp = binaryExpotential(a, x) * binaryExpotential(b, y);
                if(temp > l) break;
                else if(l % temp == 0) ans.insert(l / temp);
        }
    }

    cout<<ans.size()<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

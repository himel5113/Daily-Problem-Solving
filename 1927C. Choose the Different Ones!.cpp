#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define HA cout<<"YES"<<endl
#define Ha cout<<"Yes"<<endl
#define ha cout<<"yes"<<endl
#define NA cout<<"NO"<<endl
#define Na cout<<"No"<<endl
#define na cout<<"no"<<endl
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define sortV(V) sort(allV(V))
#define revV(V) reverse(allV(V))
#define sortA(arr, size) sort(allA(arr, size))
#define revA(arr, size) reverse(allA(arr, size))
#define sumV(a) accumulate(a.begin(), a.end(), 0)
#define fi first
#define se second 
#define pb(V) push_back(V)
#define maxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void solve() {
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> A(n), B(m);
    ll x = k/2;
    set<ll> t1, t2, s;
    for(auto &x : A) {
        cin>>x;
        if(x<=k) {
            t1.insert(x);
            s.insert(x);
        }
    }
    for(auto &y : B) {
        cin>>y;
        if(y<=k) {
            t2.insert(y);
            s.insert(y);
        }
    }

    (t1.size()>=x && t2.size()>=x && s.size() == k) ? HA : NA;
    
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

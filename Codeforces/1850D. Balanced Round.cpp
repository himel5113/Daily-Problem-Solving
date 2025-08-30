#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
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
    ll n, k;
    cin>>n>>k;
    vector<ll> V(n);
    for(ll i=0; i<n; i++)
    cin>>V[i];

    ll count = 0, ans = 0;
    sortV(V);
    for(ll i=0; i<n-1; i++) {
        if(abs(V[i]-V[i+1]) <= k) count++;
        else count = 0;

        ans = max(ans, count);
    }
    cout<<n-(ans+1)<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

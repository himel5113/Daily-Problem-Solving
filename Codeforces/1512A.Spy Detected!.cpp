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
    ll n;
    cin>>n;
    vector<ll>V(n);
    map<ll, ll>mp;
    for(ll i=0; i<n; i++) {
        cin>>V[i];
        mp[V[i]]++;
    }

    ll temp , ans = 0;
    for(auto it:mp) {
        if(it.se == 1) {
            temp = it.fi;
        }
    }
    for(ll i=0; i<n; i++) {
        if(V[i] == temp) {
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

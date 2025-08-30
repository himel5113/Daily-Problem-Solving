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
    ll n;
    cin>>n;
    vector<ll> V;
    string s;
    while(n--) {
        ll count = 0;
        cin>>s;
        for(auto i : s) {
            if(i == '1') count++; 
        }
        V.pb(count);
    }
    set<ll> st;
    //for(ll i=0; i<V.size(); i++) cout<<V[i]<<" ";
    //cout<<endl;
    for(auto u : V) {
        if(u == 0) continue;
        else st.insert(u);
    }
    //for(auto u : st) cout<<u<<" ";
    //cout<<endl;
    (st.size() == 1) ? cout<<"SQUARE"<<endl : cout<<"TRIANGLE"<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

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
    vector<char>V(6);
    for(ll i=0; i<6; i++)
    cin>>V[i];

    ll l, r = 0;
    for(ll i=0; i<V.size(); i++) {
        if(V[i] == 'W') {
            l = i;
            break;
        }
    }
    for(ll i=V.size()-1; i>=0; i--) {
        if(V[i] == 'W') {
            r = i;
            break;
        }
    }
    bool f = false;
    for(ll i=l; i<=r-2; i++) {
        if(V[i] == 'W' && V[i+1] == 'W' && V[i+2] == 'W') {
            f  = true;
        }
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //cout<<l<<" "<<r;
    //cout<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
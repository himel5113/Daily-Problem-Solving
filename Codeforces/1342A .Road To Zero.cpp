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
    ll x, y;
    cin>>x>>y;
    ll a, b;
    cin>>a>>b;
    ll t1 = x, t2 = y;
    ll temp = (t1+t2)*a;
    //vector<ll>V;
    ll sum = 0;
    if(x == 0 && y == 0)
    cout<<0<<endl;
    else {
        if(x <= y) {
            while(x != 0) {
                //V.pb(b);
                sum+=b;
                x-=1; y-=1;
            }
        }
        else if( y<x) {
            while(y != 0) {
                //V.pb(b);
                sum+=b;
                x-=1; y-=1;
            }
        }

        if( x == 0 && y != 0) {
            while(y!=0) {
                //V.pb(a);
                sum+=a;
                y-=1;
            }
        }
        else if( x != 0 && y == 0) {
            while(x!=0) {
                //V.pb(a);
                sum+=a;
                x-=1;
            }
        }
        if(x==0 && y==0) {
            cout<<min(sum, temp)<<endl;
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

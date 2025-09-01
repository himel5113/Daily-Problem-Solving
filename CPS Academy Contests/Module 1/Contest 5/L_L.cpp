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

bool check1(ll a[9][9]) {
    for(ll i=0; i<9; i++) {
        set<ll> st;
        for(ll j=0; j<9; j++) {
            st.insert(a[i][j]);
        }
        if(st.size() != 9) return false;
    }
    return true;
}

bool check2(ll a[9][9]) {
    for(ll i=0; i<9; i++) {
        set<ll> st;
        for(ll j=0; j<9; j++) {
            st.insert(a[j][i]);
        }
        if(st.size() != 9) return false;
    }
    return true;
}

bool check3(ll a[9][9]) {
    for(ll i=0; i<9; i+=3) {
        for(ll j=0; j<9; j+=3) {
            set<ll> st;
            for(ll x=0; x<3; x++) {
                for(ll y=0; y<3; y++) {
                    st.insert(a[i+x][j+y]);
                }
            }
            if(st.size() != 9) return false;
        }
    }
    return true;
}

void solve() {
    ll arr[9][9];
    for(ll i=0; i<9; i++) {
        for(ll j=0; j<9; j++) {
            cin >> arr[i][j];
        }
    }

    (check1(arr) && check2(arr) && check3(arr)) ? HA : NA;
}

int main() {
    opt();
    // tc() {
        solve();
    // }
    return 0;
}
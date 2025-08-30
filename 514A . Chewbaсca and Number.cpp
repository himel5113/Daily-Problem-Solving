#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define allS(s) s.begin(), s.end()
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

// *** approach -> 2

void solve() {
    ll n;
    cin>>n;
    ll t = n;
    vector<ll> V;
    while(n != 0) {
        V.pb(n%10);
        n/=10;
    }
    //sortV(V);
    ll x = V.size();
    if(x == 1) {
        cout<<t<<endl; return;
    }
    revV(V);

    if ((9 - V[0]) == 0)
        cout << V[0];
    else
        cout << min(V[0], 9 - V[0]);
    for (ll i = 1; i < x; i++) {
        cout << min(V[i], (9 - V[i]));
    }
}


// *** approach -> 2

// void solve() {
//     string s;
//     cin>>s;
//     char temp = s[0];
//     string ans;
//     for(ll i=0; i<s.size(); i++) {
//         ll t  = s[i]-'0';
//         ll x = 9-t;
//         ans += (min(t, x))+'0';
//     }
//     if(ans[0] == '0') ans[0] = temp;

//     cout<<ans<<endl;
// }

int main() {
    opt();
    solve();
    return 0;
}

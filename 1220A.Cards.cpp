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
    ll x;
    cin>>x;
    string s;
    cin>>s;
    ll o = 0, n = 0, e = 0, z = 0, r = 0;
    vector<ll> ans;
    for(char i : s) {
        if(i == 'o') o++;
        else if(i == 'n') n++;
        else if(i == 'e') e++;
        else if(i == 'z') z++;
        else if(i == 'r') r++;

        if(o>=1 && n>=1 && e>=1) {
            ans.push_back(1);
            o--; n--; e--;
        }
        else if(z>=1 && e>=1 && r>=1 && o>=1) {
            ans.push_back(0);
            z--; e--; r--; o--;
        }
    }
    sortV(ans);
    revV(ans);
    for(ll u : ans)
    cout<<u<<" ";
}

int main() {
    opt();
    solve();
    return 0;
}

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
const ll N = 2e5+1;
ll dp[N];

using namespace std;

ll sum(ll n) {
    ll sum = 0;
    while(n != 0) {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

void solve() {
    ll n;
    cin>>n;
    cout<<dp[n]<<endl;
}

int main() {
    opt();

    dp[0] = 0;
    for(ll i=1; i<=N; i++) {
        dp[i] = dp[i-1] + sum(i);
    }

    tc() {
        solve();
    }
    return 0;
}

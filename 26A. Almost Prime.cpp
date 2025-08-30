#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define sortA(arr, size) sort(allA(arr, size))
#define revA(arr, size) reverse(allA(arr, size))
#define sortV(V) sort(allV(V))
#define revV(V) reverse(allV(V))
#define revS(s) reverse(s.begin(), s.end())
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

// *** approach -> 1

ll primeFact(ll n) {
    set<ll> st;
    for(ll i=2; i*i<=n; i++) {
        if(n%i==0) {
            int count=0;
            while(n%i==0) {
                count++;
                n/=i;
            }
            st.insert(i);
        }
    }
    if(n>1) st.insert(n);

    return st.size();
}

void solve() {
    ll n, count = 0;
    cin>>n;
    for(ll i=1; i<=n; i++) {
        if(primeFact(i) == 2) count++;
    }
    cout<<count<<endl;
}

int main() {
    opt();
    solve();
    return 0;
}


// *** Approach -> 2

/*
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i*i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isAlmostPrime(ll n) {
    ll count = 0;
    for(ll i=2; i<=n; i++) {
        if(n % i == 0) {
            if(isPrime(i)) count++;
        }
    }
    return(count == 2) ? true : false;
}

int main() {
    opt();
    ll n, count = 0;
    cin>>n;
    for(ll i=1; i<=n; i++) {
        if(isAlmostPrime(i)) count++;
    }
    cout<<count<<endl;
    return 0;
}
*/

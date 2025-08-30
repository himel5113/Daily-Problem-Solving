#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define allS(s) s.begin(), s.end()
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
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

const int MAX_SIZE = 1e6;
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ld EPS = INT_MIN;

using namespace std;
set<ll> primes; // for approach -> 3

// ***approach -> 1

vector<bool> prime(MAX_SIZE+5, 0);

void sieve() {
    prime[0] = prime[1] = 1;
    for(ll i=2; i*i<=MAX_SIZE; i++) {
        if(prime[i]==0) {
            for(ll j=i*i; j<=MAX_SIZE; j+=i) {
                prime[j]=1;
            }
        }
    }
}

// bool isPrime(ll n)  {            // for approach -> 2 & 3
//     if (n < 2) return false;
//     if (n == 2) return true;
//     if (n % 2 == 0) return false;
//     for (ll i = 3; i*i <= n; i++)
//     {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

void solve() {
    ll n; cin>>n;
    ll t = sqrt(n);
    (t*t == n && prime[t] == 0) ? HA : NA;    // for approach -> 1
    //(t*t == n && isPrime(t)) ? HA : NA;       // for approach -> 2 
    //(primes.find(n) != primes.end()) ? HA : NA;  // for approach -> 3
}

int main() {
    opt();
    // primes.insert(4);                // for approach -> 3
    // for(ll i=3; i<=MAX_SIZE; i++) {
    //     if(isPrime(i)) primes.insert(i*i);
    // }
    sieve();        // for approach -> 1
    tc() {
        solve();
    }
    return 0;
}

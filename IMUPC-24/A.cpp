//    Problem  	A. Optimal Exam   ----> IMUPC 24
//               TEAM : MU_Codebenders


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef map<int, int> mp;
typedef set<int> se;
typedef pair<int, int> pr;
#define bug(a) cout << #a << " : " << a << endl;
#define inf INT_MAX
#define pb push_back
#define ppb pop_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
 
void solve(int cs)
{
     ll n;
     cin>>n;
     vector<ll> V(n);
     for(auto &x : V) cin>>x;
    sort(V.begin(), V.end(), greater<ll>());
    //for(auto u : V) cout<<u<<" ";
    ll count = 0, ex = 0;
    for(ll i=0; i<n; i++) {
        if(V[i]>=80) {
            count++;
            ex += (V[i]-80);
        }
        else {
            if((V[i]+ex) >= 80) {
                count++;
                ex = ((V[i]+ex) - 80);
            }
        }
    }
    cout<<count<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc = 1;
    // cin >> tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        solve(cs);
    }
    return 0;
}
 
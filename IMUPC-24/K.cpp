//    Problem  K. Fantastic Sum   ----> IMUPC 24
//               TEAM : MU_Codebenders

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
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
 
const ll M= 1e9+7;
const ll N= 1e6+5;
ll pre[N];
ll f[N];
 
void solve(int cs)
{
    int n;
    cin>>n;
 
    cout<<"Case "<<cs<<": "<<pre[n-1]<<endl;
}
int main()
{
    f[0] = 0;
    f[1]=1;
    f[2]=1;
    ll sum=0;
    for(int i=3; i<N; i++)
    {
        f[i]=(f[i-1]+f[i-2])%M;
    }
    pre[0] = 0, pre[1] = 1;
    for(int i=2; i<N; i++)
    {
        pre[i]=(pre[i-1]+((f[i]*f[i])%M))%M;
 
    }
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc = 1;
    cin >> tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        solve(cs);
    }
    return 0;
}

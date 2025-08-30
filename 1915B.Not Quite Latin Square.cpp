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
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    
    int a1 = s1.find('A');
    int b1 = s1.find('B');
    int c1 = s1.find('C');
    int a2 = s2.find('A');
    int b2 = s2.find('B');
    int c2 = s2.find('C');
    int a3 = s3.find('A');
    int b3 = s3.find('B');
    int c3 = s3.find('C');

    if(a1 == -1 || a2 == -1 || a3 == -1)
    cout<<"A"<<endl;
    if(b1 == -1 || b2 == -1 || b3 == -1)
    cout<<"B"<<endl;
    if(c1 == -1 || c2 == -1 || c3 == -1)
    cout<<"C"<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}

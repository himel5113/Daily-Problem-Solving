#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll a[n][n];
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if (i == j || i + j == n - 1 || i == (n-1) / 2 || j == (n-1) / 2) 
                sum += a[i][j];
        }
    }
    cout << sum << endl;
}

int main() {

    opt();

    solve();

    return 0;
}

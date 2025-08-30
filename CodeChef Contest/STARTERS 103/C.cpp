#include <bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'
#define max(a) *max_element(a.begin(), a.end())
#define min(a) *min_element(a.begin(), a.end())
#define tc() ll t; cin >> t; while (t--)
#define opt() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

ll toNum(vector<ll> &arr) {
    ll r = 0;
    for (ll d : arr)
        r = r * 10 + d;

    return r;
}

ll max2(vector<ll> &a) {
    ll n = a.size(); 
    ll max1 = 0, max2 = 0;

    for (ll i = 0; i < n; i++) {
        if (a[i] > max1)
            max1 = a[i];
    }
    for (ll i = 0; i < n; i++) {
        if (a[i] > max2 && a[i] < max1)
            max2 = a[i];
    }
    return max2;
}

void solve() {
    vector<ll> V(6);
    for (ll i = 0; i < 6; i++)
        cin >> V[i];

    vector<ll> T1(V.begin(), V.begin() + 3); 
    vector<ll> T2(V.begin() + 3, V.end());   

    vector<ll> a1, a2; 
   sort(T1.begin(), T1.end());
   sort(T2.begin(), T2.end());
   a1.push_back(T1[2]);
   a1.push_back(T1[1]);
   a1.push_back(T1[0]);
   a2.push_back(T2[2]);
   a2.push_back(T2[1]);
   a2.push_back(T2[0]);


    ll r1 = toNum(a1);
    ll r2 = toNum(a2);
    if (r1 > r2)
        cout << "Alice" << endl;
    else if (r2 == r1)
        cout << "Tie" << endl;
    else
        cout << "Bob" << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
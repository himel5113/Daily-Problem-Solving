#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1e7 + 1e6;
int arr[N];
vector<int> ans;

int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void preCalc() {
    for(int i = 0; i <= N; i++) {
        if(sumOfDigits(i) == 10) {
            ans.push_back(i);
        }
    }
}

void solve() {
    int k; cin >> k;
    cout << ans[k - 1] << '\n';
}

// void solve() {       approach --> 2
//     int k; cin >> k;
//     int ans = 0, t = 0;
//     for(int i = 19; t < k; i++) {
//         if(sumOfDigits(i) == 10) {
//             t++;
//             ans = i;
//         } 
//     }
//     cout << ans << '\n';
// }


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    preCalc();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}




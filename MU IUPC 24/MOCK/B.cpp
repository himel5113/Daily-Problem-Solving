#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ca = 1;

void solve() {
    ll  c; cin >> c;
    cout << "Case " << ca++ << ": ";
    ll cnt = 0;
    double sum = 0, cr = 0;
    for(ll i=0; i<c; i++) {
        double m, n;
        cin >> m >> n;
        if(m >= 80 && m <= 100) {
            sum += (4*n);
        }
        else if(m >= 75 && m < 80) {
            sum += (3.75*n);
        }
        else if(m >= 70 && m < 75) {
            sum += (3.5*n);
        }
        else if(m >= 65 && m < 70) {
            sum += (3.25*n);
        }
        else if(m >= 60 && m < 65) {
            sum += (3.00*n);
        }
        else if(m >= 55 && m < 60) {
            sum += (2.75*n);
        }
        else if(m >= 50 && m < 55) {
            sum += (2.5*n);
        }
        else if(m >= 45 && m < 50) {
            sum += (2.25*n);
        }
        else if(m >= 40 && m < 45) {
            sum += (2.00*n);
        }
        else cnt++;
        cr += n;
    }
    if(cnt == 1) cout << "Sorry, you have failed in 1 course!\n";
    else if(cnt > 1) cout << "Sorry, you have failed in " << cnt << " courses!\n";
    else {
        cout << fixed << setprecision(2) << sum / cr << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

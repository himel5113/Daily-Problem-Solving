#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Generate n different regular bracket sequences of length 2n
    for (int i = 0; i < n; ++i) {
        string result;
        // Place i pairs of "()" at the beginning
        for (int j = 0; j < i; ++j) {
            result += "()";
        }
        // Enclose remaining pairs in outer brackets
        for (int j = 0; j < n - i; ++j) {
            result = "(" + result + ")";
        }
        cout << result << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

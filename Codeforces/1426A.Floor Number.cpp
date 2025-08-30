
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b;
    cin>>a>>b;
    ll floor_count=1, check=2;
    while(check<a) {
        check+=b;
        floor_count++;
    }
    cout<<floor_count<<endl;
}
int main() {
    ll t;
    cin>>t;
    while (t--)
    solve();
 
}

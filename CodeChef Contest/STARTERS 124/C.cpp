#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t; cin>>t;
	while(t--) {
	    ll n; cin>>n;
        ll x = __builtin_popcount(n);
        (x & 1) ? cout<<"ODD\n" : cout<<"EVEN\n";
	}
}

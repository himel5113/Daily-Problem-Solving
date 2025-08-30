#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--) {
	    ll a, b; cin>>a>>b;
	    ((a-1) >= b) ? cout<<"YES\n" : cout<<"NO\n";
	}
}

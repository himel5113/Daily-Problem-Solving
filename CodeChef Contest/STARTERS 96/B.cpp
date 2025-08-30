#include <iostream>
using namespace std;

void solve() {
    int n, x, k, p;
    cin>>n>>x>>k>>p;
    int ans=p;
    if(k<=x)
    ans+=k*10;
    else {
        ans+=abs(x-k)*5;
        ans+=x*10;
        if(n==k)
        ans+=20;
    }
    cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    solve();
	}
	return 0;
}
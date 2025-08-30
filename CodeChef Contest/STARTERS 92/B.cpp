#include <iostream>
using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;;
    int check=a+b+c;
    if(check>=2)
    cout<<"Not now"<<endl;
    else
    cout<<"Water filling time"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
	return 0;
}
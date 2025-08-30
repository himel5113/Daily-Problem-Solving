#include<bits/stdc++.h>
#include<string>
#define ll      long long
#define endl   '\n'
#define sq(a)  sqrt(a)
#define tc()   ll testCase;cin>>testCase;while(testCase--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll temp=180-n;
    string ans = (360%temp) ? "NO":"YES";

    cout<<ans<<endl;
}

int main() {

    opt();

    tc() {
        solve();
    }

    return 0;
}

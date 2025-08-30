#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    if(n%10==9)
    cout<<(n/10)+1<<endl;
    else
    cout<<(n/10)<<endl;
}

int main() {

    opt();

    tc() {
        solve();
    }

    return 0;
}

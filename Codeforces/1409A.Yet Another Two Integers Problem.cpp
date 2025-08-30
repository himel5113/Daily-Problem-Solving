#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll testCase; cin>>testCase; while(testCase--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll a, b;
    cin>>a>>b;
    
    ll sub = abs(a-b);
    if(sub%10 == 0)
    cout<<sub/10<<endl;
    else
    cout<<sub/10+1<<endl;
    
}

int main() {
    
    opt();

    tc() {
        solve();
    }

    return 0;
}

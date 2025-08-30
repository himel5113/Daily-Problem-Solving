#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();

    ll n, k, sum=0, count=0;
    cin>>n>>k;
    for(ll i=1; i<=n; i++) {
        sum+=i*5;

        if((sum+k)<=240)
        count++;
    }
    cout<<count<<endl;

    return 0;
}

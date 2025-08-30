#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();

    ll n, sum=0, count=0, temp=0;
    cin>>n;
    for(ll i=1; i<=n; i++) {
        sum+=i;
        temp+=sum;
        if(temp<=n)
        count++;
    }
    cout<<count;
}

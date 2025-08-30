
/**
 *  @author Sudipto Dey Himel
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        set<int>ans;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++) {
            cin>>arr[i];
            ans.insert(arr[i]);
        }
        cout<<ans.size()<<endl;
    }
}

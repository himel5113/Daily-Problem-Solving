
#include<bits/stdc++.h>
using namespace std;
#define ll long long

/**
     @author Sudipto Dey Himel
*/

void solve() {
    ll arr[3];

    for(ll i=0; i<3; i++)
    cin>>arr[i];

    sort(arr, arr+3);
    cout<<arr[1]<<endl;
}

int main() {
    ll test_case;
    cin>>test_case;
    while(test_case--) {
        solve();
    }
}


/**
 *  @author Sudipto Dey Himel
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll arr[3];
    for(ll i=0; i<3; i++) 
    cin>>arr[i];

    sort(arr, arr+3);

    ll ans=abs(arr[0]-arr[1])+abs(arr[1]-arr[2]);
    cout<<ans;
}

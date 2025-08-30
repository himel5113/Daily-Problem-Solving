#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll arr[4] ;
    for(ll i=0; i<4; i++) 
    cin>>arr[i];

    sort(arr, arr+4);
    ll temp=arr[3];
    for(ll i=0; i<3; i++) 
    cout<<temp-arr[i]<<" ";
}

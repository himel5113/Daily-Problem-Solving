#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, count=0;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++) 
    cin>>arr[i];

    ll max=arr[0];
    ll min=arr[0];

    for(ll i=0; i<n; i++) {
        if(arr[i]>max) {
            count++;
            max=arr[i];
        }

        else if(arr[i]<min) {
            count++;
            min=arr[i];
        }
    }
    cout<<count<<endl;
}

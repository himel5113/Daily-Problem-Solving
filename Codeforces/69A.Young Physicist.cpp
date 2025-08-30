#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,  sum1=0, sum2=0, sum3=0;
    cin>>n;
    //vector<ll>V;
    while(n--) {
        ll arr[3];
        for(ll i=0; i<3; i++)
        cin>>arr[i];

        sum1+=arr[0];
        sum2+=arr[1];
        sum3+=arr[2];
    }
    if(sum1==0 && sum2==0 && sum3==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

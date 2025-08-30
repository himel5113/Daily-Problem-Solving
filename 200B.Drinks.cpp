
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

/**
    @author Sudipto Dey Himel
*/

int main() {
    ll n, sum=0;
    cin>>n;
    dd arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<fixed<<setprecision(12)<<(dd)sum/n<<endl;
}

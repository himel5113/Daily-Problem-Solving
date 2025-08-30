
#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n, count=1, max=1;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    for(ll i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        count++;
        else{
            if(count>max) max=count;
            count=1;
        }
    }
    if(count>max) max=count;
    cout<<max<<endl;
 
    return 0;
}

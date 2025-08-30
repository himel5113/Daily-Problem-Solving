
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,z,i,count=0;
    cin>>n>>m>>z;
    for(i=1;i<=z;i++)
    {
        if(i%n==0 && i%m==0)
            count++;
    }
    cout<<count;
 
    return 0;
}

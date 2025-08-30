#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y, z;
        cin>>x>>y>>z;
        ll a=0, b=0;
        if(b=x)
        {
            a=y*z;
            if(a%b==0)
            {
                cout<<a<<" "<<b<<endl;

            }
            else
            {
                if(b=y)
                {
                    a=x*z;
                    if(a%b==0)
                    {
                        cout<<a<<" "<<b<<endl;

                    }
                    else
                    {
                        if(b=z)
                        {
                            a=x*y;
                            if(a%b==0)
                            {
                                cout<<a<<" "<<b<<endl;

                            }
                            else
                                cout<<-1<<endl;;
                        }
                    }
                }
            }
        }
    }
}
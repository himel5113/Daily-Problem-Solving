#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt() ;
    tc() {
        ll n;
        cin>>n;
        if(n<=6 || n==9) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            if(n%3) {
                
                cout<<1<<" "<<2<<" "<<n-1-2<<endl;
            }
            else {

                cout<<1<<" "<<4<<" "<<n-1-4<<endl;
            }
        }
    }
}

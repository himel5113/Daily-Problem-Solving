#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc(t) ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, x, count = 0;
    cin>>n>>x;
    ll temp = x;
    while(n--) {
        char ch; int d;
        cin>>ch>>d;
        if(ch=='+') {
            temp += d;
        }
        else if(ch == '-') {
            if(temp>=d)
            temp -= d;
            else {
                count++;
            }
        }
    }
    cout<<temp<<" "<<count;
}

int main() {

    opt();
    solve();

    return 0;
}

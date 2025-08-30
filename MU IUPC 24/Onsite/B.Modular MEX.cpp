#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    long long n;
    cin >> n;
    
    if(n&1){
        cout<<(n/2)+1<<endl;

    }
    else{
        cout<<n/2<<endl;
    }

}

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
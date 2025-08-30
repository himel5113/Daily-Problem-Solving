#include<bits/stdc++.h>
#include<vector>
#define ll     long long
#define endl   '\n'
#define vecst(a) sort(a.begin(), a.end())
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    vector<ll>V(4);
    for(ll i=0; i<4; i++)
    cin>>V[i];

    vecst(V);
    if(V[0]+V[1]>V[2] || V[1]+V[2]>V[3] || V[0]+V[2]>V[3])
    cout<<"TRIANGLE"<<endl;
    else if(V[0]+V[1]==V[2] || V[1]+V[2]==V[3] || V[0]+V[2]==V[3])
    cout<<"SEGMENT"<<endl;
    else
    cout<<"IMPOSSIBLE"<<endl;


    return 0;
}

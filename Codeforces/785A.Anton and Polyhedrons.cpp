
/**
 *  @author Sudipto Dey Himel
*/

#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
#define ll long long
#define phase_1 "Tetrahedron"
#define phase_2 "Cube"
#define phase_3 "Octahedron"
#define phase_4 "Dodecahedron"
#define phase_5 "Icosahedron"

int main() {
    ll test_case;
    string s;
    cin>>test_case;
    vector<int>V;
    while(test_case--) {
        cin>>s;
        if(s==phase_1)
        V.push_back(4);
        if(s==phase_2)
        V.push_back(6);
        if(s==phase_3)
        V.push_back(8);
        if(s==phase_4)
        V.push_back(12);
        if(s==phase_5)
        V.push_back(20);
    }
    cout<<accumulate(V.begin(), V.end(), 0);
}

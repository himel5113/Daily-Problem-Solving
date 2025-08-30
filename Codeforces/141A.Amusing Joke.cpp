
/**
 *  @author Sudipto Dey Himel
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string s1, s2, S, new_string;
    cin>>s1>>s2>>S;
    new_string = s1+s2;
    sort(new_string.begin(), new_string.end());
    sort(S.begin(), S.end());

    if(new_string==S)
    cout<<"YES";
    else
    cout<<"NO";
}

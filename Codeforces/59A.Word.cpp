
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count1=0, count2=0;
    for(int i=0; i<s.size(); i++) {
        if(isupper(s[i]))
        count1++;
        else
        count2++;
    }
    if(count1>count2)
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl;
}



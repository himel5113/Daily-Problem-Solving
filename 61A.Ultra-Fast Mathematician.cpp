
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s1, s2;
    cin>>s1>>s2;
    int j=0;
    for(int i=0; i<s1.size(); i++) {
        if(s1[i]==s2[i])
        s1[j++]='0';
        else
        s1[j++]='1';
    }
    cout<<s1;
}

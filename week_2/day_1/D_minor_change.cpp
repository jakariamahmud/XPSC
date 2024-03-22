#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]) c++;
    }
    cout<<c<<'\n';

    return 0;
}

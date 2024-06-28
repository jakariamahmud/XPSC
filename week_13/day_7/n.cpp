#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    string s1,s2;cin>>s1>>s2;
    long long sz1= s1.size()-1,sz2= s2.size()-1;
    while(sz1>=0 && sz2>=0){
        if(s1[sz1]!=s2[sz2]) break;
        sz1--;sz2--;
    }
    cout<<sz1+sz2+2<<endl;
      
    return 0;
}

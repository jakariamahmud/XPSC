/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 20-04-2024 17:13:48       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.size()/2;i++) m[s[i]]++;
        if(m.size()>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
      
    return 0;
}

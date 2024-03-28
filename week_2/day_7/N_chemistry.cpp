#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> m;
        for(char x:s) m[x]++;
        for(auto x:m) if(x.second%2 == 1) cnt++;
        if(cnt>0) cnt--;
        if(cnt <= k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }

    return 0;
}

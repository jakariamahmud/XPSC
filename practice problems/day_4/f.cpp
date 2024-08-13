#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s1,s2;cin>>s1>>s2;
        if(s1==s2) cout<<"YES"<<endl;
        else{
            int i=0,o=0;
            for(;i<n;i++){
                if(s1[i]=='1') o++;
                if(s1[i]!=s2[i]) break;
            }
            if((s1[i]=='0' && s2[i]=='1') && o==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;   
        }
    }
      
    return 0;
}

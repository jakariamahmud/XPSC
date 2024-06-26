#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int one =0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1') one++;
        }
        if(one==0) cout<<1<<endl;
        else if(one==1) cout<<11<<endl;
        else if(one==2){
            if(s=="1100" || s=="0011") cout<<21<<endl;
            else cout<<121<<endl;
        }
        else if(one==3) cout<<231<<endl;
        else if(one==4) cout<<441<<endl;
    }
      
    return 0;
}

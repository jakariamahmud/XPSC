#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int o=0,z=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
                char a=s[i];
                while(a==s[i]) i++;
                i--;
            }
            else o++;
            
        }
        if(z<o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

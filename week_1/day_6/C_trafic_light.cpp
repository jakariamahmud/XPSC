#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        s= s+s;
        int ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==c){
                int ic=1;
                i++;
                while(s[i]=='y' || s[i]=='r'){
                    ic++;
                    i++;
                    if(s[i]=='g') break;
                }
                ans=max(ans,(ic));

            }
            
        }
        if(c=='g') ans=0;
        cout<<ans<<endl;
    }
    return 0;
}

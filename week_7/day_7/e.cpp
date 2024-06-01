#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int ans=INT_MAX;
        for(int i=0;i<26;i++){
            int l=0,r=n-1,ic=0;
            char tm = 'a'+i;
            while(l<r){
                if(s[l]==s[r]){
                    l++;r--;
                }
                else if(s[l]==tm){
                    ic++;
                    l++;
                }
                else if(s[r]==tm){
                    ic++;
                    r--;
                }
                else{
                    ic=INT_MAX;
                    break;
                } 
            }
            ans=min(ans,ic);
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
      
    return 0;
}

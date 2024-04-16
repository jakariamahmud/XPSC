/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 08-04-2024 20:04:43       *
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
        int n,k;
        cin>>n>>k;
        vector<int> v(n),pre(n+1);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=1;i<=n;i++){
            pre[i]+=(v[i-1]%2)+pre[i-1];
        }
        int l=1,r=0,ans=0;
        while(r<n+1){
            if(r-l+1 ==k){
                if(pre[r]-pre[l-1]>0) ans++;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

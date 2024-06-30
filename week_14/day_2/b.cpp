#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x%m]++;
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            x = x%m;
            if(x==0) ans+=mp[x];
            else{
                long long tm=m-x;
                if(mp[tm]) ans+=mp[tm];
            }
        }
        cout<<ans<<endl;

    }
      
    return 0;
}
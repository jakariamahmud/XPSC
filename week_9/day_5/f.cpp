/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 24-04-2024 21:21:00       *
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
        int n;
        cin>>n;
        vector<long long> v(n);
        long long mn = LONG_MAX;

        for(int i=0;i<n;i++) {
            cin>>v[i];
            mn = min(mn,v[i]);
        }
        sort(v.begin(),v.end());
        long long ans= mn;
        bool f=1;
        for(int i=0;i<n;i++){
            if(f && v[i]==mn) f=0;
            else if(v[i]==1) ans+=v[i];
            else{
                ans = (ans*v[i]);
            }
        }
        cout<<ans<<endl;

        
    }
      
    return 0;
}

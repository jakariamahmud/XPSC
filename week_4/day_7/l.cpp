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
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end(),greater<long long>());
        long long ans=0,cur=0;
        for(int i=0;i<n;i++){
            if(cur<v[i]) {
                ans++;
            }
            cur^=v[i];
        }
        cout<<ans<<'\n';
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t,n,k,q,ans;cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v(n+1);
        vector<long long> pre(n+1);
        for(int i=1;i<=n;i++) {
            cin>>v[i];
            pre[i]=pre[i-1]+v[i];
            v[i]=max(v[i],v[i-1]);
        }
        for(int i=0;i<k;i++){
            cin>>q;
            auto ans=upper_bound(v.begin(),v.end(),q)-v.begin();
            cout<<pre[ans-1]<<" ";
        }
        cout<<endl;

    }
      
    return 0;
}

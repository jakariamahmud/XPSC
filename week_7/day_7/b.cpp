#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int &x:v) cin>>x;
        int ans= INT_MAX;
        for(int i=1;i<n-1;i++){
            ans=min(ans,max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])));
        }
        ans=min(ans,min(abs(v[0]-v[1]),abs(v[n-1]-v[n-2])));
        cout<<ans<<endl;

    }
      
    return 0;
}

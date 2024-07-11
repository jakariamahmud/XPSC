#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<long long, int> m;
        for(int i=0;i<n;i++){
            long long x;cin>>x;
            m[x]++;
        }

        long long ans=n;
        for(auto [x,y]:m){
            ans = min(ans,(x*(n-y)));
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

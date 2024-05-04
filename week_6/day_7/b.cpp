#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        auto ok = [&](long long mid){
            long long cnt=0;
            for(int i=0;i<n;i++){
                cnt+=(v[i]<mid ? (mid-v[i]) : 0); 
            }
            return cnt;
        };
        long long l=0,r=2e9,mid,ans;
        while(l<=r){
            mid = l+(r-l) / 2;
            if(ok(mid)<=x){
                ans=mid;
                l = mid+1;
            }
            else  r= mid-1;
        }
        cout<<ans<<endl;
    }

      
    return 0;
}

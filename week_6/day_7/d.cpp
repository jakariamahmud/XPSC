#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        long long ans;
        auto ok=[&](long long a){
            int ic=1;
            for(int l=0,r=l+1;r<n;) {
                if(v[l]+(2*a)>=v[r]) r++;
                else{
                    ic++;
                    l=r;
                    r=l;
                }
            }
            return (ic<4);
        };
        long long l=0,r=LONG_MAX;
        while(l<=r){
            long long mid = l+(r-l)/2LL;
            if(ok(mid)){
                ans=mid;
                r=mid-1LL;
            }
            else l = mid+1LL;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

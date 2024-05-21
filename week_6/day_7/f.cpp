#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    auto ok=[&](vector<int> v, int n, int k){
        multiset<int> m;
        for(auto a:v)  m.insert(a);
        for(int i=1;i<=k;i++){
            if(m.empty()) return 0;
            int p=k-i+1;
            auto r=m.upper_bound(p);
            if(r==m.begin()) return 0;
            m.erase(--r);
            if(!m.empty()){
                long long b= (*(m.begin()))+p;
                m.erase(m.begin()); m.insert(b);
            }
        }
        return 1;
    };

    int t; cin>>t;
    while(t--){
        int n,ans; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int l=0,r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ok(v,n,mid)){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<'\n';
    }
      
    return 0;
}

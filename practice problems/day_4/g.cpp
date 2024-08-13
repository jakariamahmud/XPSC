#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        long long n,k,x;cin>>n>>k;
        long long mid = n/2,ans=0;
        vector<long long> v(n*k);
        for(long long i=0;i<n*k;i++){
            cin>>x;
            v[i]=x;
        }
        long long a=k;
        for(long long i=(n*k)-1;i>=0 && a;i--){
            long long tm=mid;
            while(tm--) i--;
            ans+=v[i];
            a--;
        }
        cout<<ans<<endl;

    }
      
    return 0;
}

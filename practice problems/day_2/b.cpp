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
        map<long long,long long> m;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            m[(__lg(x))+1]++;
        }
        long long ans=0;
        for(auto x:m){
            if(x.second>1) ans+=(x.second*(x.second-1)/2);
        }
        cout<<ans<<endl;
    }
      
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans=0,ic=0,it=0;
        for(int i=0;i<n;i++){
            if(v[i]<=q) it++;
            else it=0;
            if(it>=k){
                int y = it-k;
                if(y>=0){
                    ans+=(y+1);
                } 
            } 
        }
        cout<<ans<<'\n';
    }

    return 0;
}

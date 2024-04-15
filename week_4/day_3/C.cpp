/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 08-04-2024 20:04:43       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        long long n,k,ic=0;
        cin>>n>>k;
        vector<long long> v(n),a;
        for(long long i=0;i<n;i++) cin>>v[i];
        int l=0,r=0,ans=0,i=v[0];
        while(r<n){
            ans|=v[r];
            if(r-l+1 ==k){
                if((ans&1)) ic++;
                cout<<v[l]<<"-"<<v[r]<<" = ";
                cout<<ans<<endl;
                ans^=i;
                i=ans;
                // cout<<" "<<ans<<endl;
                l++;
            }
            r++;
        }
        cout<<ic<<endl;
        // cout<<(5&1)<<endl;
    }
      
    return 0;
}

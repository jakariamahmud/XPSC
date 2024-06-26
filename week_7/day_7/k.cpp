#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        long long ans=0;

        for(int i=0;i<k;k/=2){
            if(k%2==1){
                ans+=(pow(n,i));
            }
            ans%=mod;
        }
        cout<<ans<<endl;

        
    }
      
    return 0;
}
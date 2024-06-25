#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,ans;cin>>n;

        int sq = sqrt(n); n-=sq;
        if(n%sq==0) ans=n/sq-1;
        else ans = n/sq;
        
        cout<<ans+sq<<endl;
    }
      
    return 0;
}

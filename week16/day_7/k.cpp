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
        for(long long &x:v) cin>>x;
        long long tm= 0, i=0;
        for(long long x:v) tm|=x;
        for(;i<=31;i++){
            if(!(tm&1)) break;
            tm = tm>>1;
        }
        int ans=0;
        for(long long x:v){
            if((1<<i)<=x) ans++;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

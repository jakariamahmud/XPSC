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
        long long a,b,c,diff;
        a= __lg(k);
        b=pow(2,a);
        diff = k-b;
        c= __lg(diff);
        long long ans1=1,ans2=1;
        for(int i=0;i<a;i++){
            ans1*=n;
            ans1%=mod;
        } 
        for(int i=0;i<c;i++) {
            ans2*=n;
            ans2%=mod;
        }
        if(a==0) ans1=0;
        if(c==0) ans2=0;
        cout<<(ans1+ans2)%mod<<endl;

        
    }
      
    return 0;
}

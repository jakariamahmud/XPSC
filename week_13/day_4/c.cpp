#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        long long n,a,b,ans=0;cin>>n>>a>>b;
        if(a<b){
            if(b-n>=a-1){
                ans = ((b*(b+1))/2) - (((b-n)*(b-n+1))/2);
            }
            else{
                ans = ((b*(b+1))/2) - (((a)*(a+1))/2);
                ans+=((n-(b-a))*a);

            }
        }
        else ans = (n*a);
        cout<<ans<<endl;
    }
      
    return 0;
}

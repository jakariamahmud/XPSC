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
        long long sum=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=abs(x);
            mn=min(abs(x),mn);
        }
        cout<<sum-(mn*2)<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long sum=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if((n*(n+1)/2)-n<=sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        long long n,k,sum=0;cin>>n>>k;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        v[0] = n*(n+1)/2-sum;
        k=k%(n+1);
        for(int i=1;i<=n;i++){
            cout<<v[(i+n+1-k)%(n+1)]<<" ";
        }
        cout<<endl;
    }
      
    return 0;
}
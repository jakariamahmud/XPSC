#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> v(n+1);
        for (int i = 1; i < n+1; i++)
        {
            int x;
            cin>>x;
            v[i]=x+v[i-1];
            
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long sum=v[n];
            long long sum1 = v[r]-v[l-1];
            long long ans=(sum-sum1)+(k*(r-l+1));
            if(ans%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }

    return 0;
}

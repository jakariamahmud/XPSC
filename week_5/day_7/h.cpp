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
        long long sum=0,mn=INT_MAX,ic=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=abs(x);
            mn=min(abs(x),mn);
            ic+=(x<0);
        }
        cout<<(ic%2?sum-mn*2:sum)<<endl;
    }
      
    return 0;
}

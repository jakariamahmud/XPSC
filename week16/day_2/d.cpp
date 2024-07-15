#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int &x:v) cin>>x;
        int ans=-1;
        for(int i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1])==1) {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

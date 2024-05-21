#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> v(k);
        for(int &x:v) {
            cin>>x;
            x=n-x;
        }
        sort(v.begin(),v.end());
        int i;
        for(i=1;i<k;i++){
            v[i]+=v[i-1];
            if(v[i]>=n) break;
        }
        cout<<i<<endl;
    }
      
    return 0;
}

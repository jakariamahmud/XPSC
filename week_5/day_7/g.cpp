#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            v[i]+=i+1;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]<=c){
                c-=v[i];
                ans++;
            }
        }
        cout<<ans<<endl;

    }
      
    return 0;
}

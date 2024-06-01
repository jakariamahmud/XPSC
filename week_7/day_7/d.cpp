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
        map<int,int> m, f;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        vector<int> a;
        for(auto it:m){
            int x = it.first;
            int y = it.second;
            if(x<=n){
                for(int i=1;i<y;i++) a.push_back(x);
                f[x]=1;
            }
            else{
                for(int i=1;i<=y;i++) a.push_back(x);
            }

        }
        int cnt=1;
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=cnt;j<=n;j++){
                if(f[j]==1) cnt++;
                else break;
            }
            int x=(a[i]-1)/2;
            if(cnt <= x){
                cnt++;
                ans++;
            }
            else{
                ans=-1;
                break;
            }
        }
        cout<<"ans - ";
        cout<<ans<<endl;
    }
      
    return 0;
}

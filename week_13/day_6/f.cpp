#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> v(n);
        set<int> st;
        for(int &x:v) {
            cin>>x;
            st.insert(x);
        }
        int ans=INT_MAX;
        for(int x:st){
            int idx=0,cnt=0;
            while(idx<n){
                if(x!=v[idx]){
                    idx+=k;
                    cnt++;
                }
                else idx++; 
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;


    }
      
    return 0;
}

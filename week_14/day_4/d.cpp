#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string s,a;cin>>s;
        set<int> st;
        for(int i=0;i<m;i++){
            int x;cin>>x;
            st.insert(x);
        }
        cin>>a;
        sort(a.begin(),a.end());
        int i=0;
        for(auto x:st){
            s[x-1]=a[i++];
        }
        cout<<s<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=-1;
        for(int i=0;i<n;i++){
            if((v[i]&b)==b) ans&=v[i];
        }
        if(ans==b)cout<<"YES"<<'\n';
        else cout<<"NO"<< '\n';
         
    }
      
    return 0;
}

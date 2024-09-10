#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,tm=-1;cin>>n;
        vector<int> v(n);
        for(int &x:v) cin>>x;
        sort(v.begin(),v.end());
        bool f=1;
        for(int i=0;i<n;i++){
            if(v[i]%v[0]){
                if(tm==-1) tm=v[i];
                if(v[i]%tm) f=0;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
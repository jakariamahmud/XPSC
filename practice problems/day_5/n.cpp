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
        int f=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]) f=1;
        }
        if(v[0]==1 || v[n-1]==n) cout<<f<<endl;
        else if(v[0]!=n || v[n-1]!=1) cout<<2<<endl;
        else cout<<3<<endl;
        
    }
      
    return 0;
}

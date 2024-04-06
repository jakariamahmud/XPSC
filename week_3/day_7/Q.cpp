/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 06-04-2024 17:17:14       *
    ****************************************
*/

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
        vector<int> v(n);
        int mx=0,mn=1000;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
            m[v[i]]=i;
        }
        if(m[mx]==m[mn]+1 || m[mx]==m[mn]-1 ||v[n-1]==mx ||v[0]==mn) cout<<abs(mx-mn)<<endl;
        else cout<< mx-v[0]<<endl;
        
    }
      
    return 0;
}

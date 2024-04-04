#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+6;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,vector<int>> m;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            m[x].push_back(i);  
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            if( !m[a].empty() && !m[b].empty() ){
                if(m[a][0]<=m[b][m[b].size()-1]) cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
            }
            else cout<<"NO"<<'\n';

        }

    }

    return 0;
}

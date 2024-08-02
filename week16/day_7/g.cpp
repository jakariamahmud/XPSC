#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        vector<pair<int,int>> v(4);
        for(int i=0;i<4;i++){
            int a,b;cin>>a>>b;
            v[i]={a,b};
        }
        int x,y;
        pair<int,int> tm;
        for(int i=1;i<4;i++){
            int a=v[0].second;
            if(v[i].second==a){
                x=abs(v[0].first-v[i].first);
            }
            if(v[i].second!=a) tm=v[i];
        }
        for(int i=0;i<4;i++){
            if(tm.first!=v[i].first && tm.second==v[i].second){
                y=abs(tm.first-v[i].first);
            }
        }
        cout<<x*y<<endl;
    }
      
    return 0;
}

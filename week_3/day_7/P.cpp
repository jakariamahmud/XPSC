/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 07-04-2024 12:28:35       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+6;
vector<int> v[N];
long long cnt[N];

void dfs(int n, int x){
    if(v[n].size()==1 && n!=1) cnt[n]=1;
    for(int child:v[n]){

        if(child != x){
            dfs(child,n);
            cnt[n]+=cnt[child];
        }
        // cout<<"----";
        // cout<<n<<" "<<child<<" "<<x<<" "<< cnt[n]<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cnt[i]=0;
            v[i].clear();
        }
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }  
        dfs(1,-1);
        int  q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            cout<<cnt[x]*cnt[y]<<endl;
        }
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long ic[200005];

void dfs(int n, int x,vector<int> v[]){
    if(v[n].size()==1 && n!=1) ic[n]=1;
    for(int child:v[n]){
        if(child!=x){
            dfs(child,n,v);
            ic[n]+=ic[child];
        }
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
        vector<int> v[n+1];
        memset(ic,0,sizeof(ic));
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1,-1,v);
        int q;
        cin>>q;
        while(q--){
            int a,b;
            cin>>a>>b;
            cout<<ic[a]*ic[b]<<endl;
        }
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,d;cin>>n>>m>>x>>y>>d;
        if((((x+d)<n || (x-d)>1) && ((y+d)<m || (y-d)>1)) && (((x-d)>1 || (y-d)>1) && ((x+d)<n ||(y+d)<m))) cout<<n+m-2<<endl;
        else cout<<-1<<endl;
    }
      
    return 0;
}

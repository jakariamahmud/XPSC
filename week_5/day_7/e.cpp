#include<bits/stdc++.h>
using namespace std;
int n,l,r,x,c[16],ans=0,ic;
int tb(int e, int f){
    f+=c[e];
    if((f>=l && f<=r)  && (c[e]-c[ic] >= x)) ans++;
    for( int j=e+1;j<n;j++) tb(j,f);
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++) cin>>c[i];

    sort(c,c+n);

    for(ic=0;ic<n;ic++){
        if(c[ic]+c[ic+1] > r) break;
        tb(ic,0);
    }
    cout<<ans<<'\n';


      
    return 0;
}

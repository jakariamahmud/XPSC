#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=1;i<101;i++){
        int tm=a/i;
        int tn=b/i;
        if((tm+tn)<n || tm==0 || tn==0) break;
        ans=i;
    }
    cout<<ans<<endl;
      
    return 0;
}

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
        int a[n],ans=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            ans=max(a[i-1]-i,ans);
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}

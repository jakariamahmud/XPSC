#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,ic=1; cin>>n;
        int tm=n;
        for(int i=1;i<=n/2;i++){
            cout<<tm<<" "<<i<<" ";
            tm--;
        }
        if(n&1) cout<<n/2+1<<" ";
        cout<<endl;
    }
      
    return 0;
}
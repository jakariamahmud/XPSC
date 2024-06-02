#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n&1){
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else{
            cout<<(n/2)+1<<" ";
            for(int i=2;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
      
    return 0;
}

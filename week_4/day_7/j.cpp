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
        int x = __lg(n);
        int ans=1;
        bool f=0;
        for(int i=x-1;i>=0;i--){
            if(n &  (1 << i)) f=1;
            else if(f) ans*=2;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

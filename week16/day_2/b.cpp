#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int mn=10;
        for(int &i:v) {
            cin>>i;
            if(mn>i) mn=i;
        }
        int ans=1;
        bool f=1;
        for(int  i=0; i<n;i++){
            if(v[i]==mn) {
                v[i]++;
                break;
            }
        }
        for(int  i=0; i<n;i++){
            ans*=v[i];
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

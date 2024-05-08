#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> b(32);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            for(int j=0; j<31; j++) b[j]+= ((x>>j) & 1);
        }
        for(int i=1; i<=n;i++){
            bool f = 1;
            for(int j=0; j<31; j++){
                if(b[j] % i ) f=false;
            }
            if(f) cout<<i<<" ";
        }
        cout<<endl;
    }
      
    return 0;
}

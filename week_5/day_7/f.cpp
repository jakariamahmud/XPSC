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
        vector<int> v(n),a(32);
        for(int i=0;i<n;i++) cin>>v[i];

        for(int i=0;i<32;i++){
            for(int j=0; j<n; j++) if(v[j] & 1 <<i) a[i]++;
        }
        for(int i=1; i<=n;i++){
            int j=0;
            for(; j<32; j++){
                if(a[j] % i ) break;;
            }
            if(j==32) cout<<i<<" ";
        }
        cout<<endl;
    }
      
    return 0;
}

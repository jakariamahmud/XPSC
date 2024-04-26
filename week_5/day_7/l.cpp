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
        vector<long long> v(n);
        long long val=0;
        for(int i=0;i<n;i++) {
            cin>>v[i]; 
            if(v[i]<0) val-=min(val,abs(v[i]));
            else val+=v[i];
        }
        cout<<val<<endl;

    }
      
    return 0;
}

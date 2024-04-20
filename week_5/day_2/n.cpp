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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        bool f=1;
        for(int i=0;i<n-2;i++){
            if(v[i]<v[i+1] && v[i+1]>v[i+2]){
                cout<<"YES"<<'\n'<<i+1<<" "<<i+2<<" "<<i+3<<'\n';
                f=0;
                break;
            }
        }
        if(f) cout<<"NO"<<'\n';
    }
      
    return 0;
}

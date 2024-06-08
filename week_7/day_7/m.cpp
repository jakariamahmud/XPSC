#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,q,c;cin>>n>>q;
        vector<int> a(n);
        for(int &x:a) cin>>x;
        int mx=901;
        for(int i=0;i<q;i++){
            cin>>c;
            if(mx>c){
                for(int j=0;j<n;j++){
                    if(a[j]%(1<<c)==0) a[j]+=(1<<(c-1));
                }
                mx=c;
            }
        }
        for(int x:a) cout<<x<<" ";
        cout<<endl;
    }
      
    return 0;
}

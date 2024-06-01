#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,diff=0;cin>>n;
        vector<int> a(n),b(n);
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool f=1;
        for(int i=0;i<n;i++){
            if(a[i]-b[i] && a[i]-b[i]+1) f=0;
        }
        cout<<(f?"YES":"NO")<<endl;
    }
      
    return 0;
}

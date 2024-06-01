#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int f=1,diff=0;
        for(int i=0;i<n;i++){
            diff= max(a[i]-b[i],diff);
        }
        for(int i=0;i<n;i++){
            if(a[i]-b[i]<diff && b[i]) f=0;
        }
        cout<<((diff>-1 && f)?"YES":"NO")<<endl;
    }
      
    return 0;
}

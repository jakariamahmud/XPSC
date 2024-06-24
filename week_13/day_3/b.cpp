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
        for(int &x:v) cin>>x;
        sort(v.begin(),v.end()-1);
        cout<<v[n-2]+v[n-1]<<endl;
    }
      
    return 0;
}

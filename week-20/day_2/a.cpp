#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        double x,y,z;cin>>x>>y>>z;
        int tm1 = ceil(x/z), tm2 = ceil(y/z);
        cout<<max(2*tm1-1,2*tm2)<<endl;
    }
      
    return 0;
}

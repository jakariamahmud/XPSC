#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int ans =0;
        int x = a.find(b.substr(5,2));
        cout<<x<<endl;
        // for(int i=0;i<b.size();i++){
        //     for(int j=1;j<=b.size()-i;j++){
        //        int x = a.find(b.substr(i,j));
        //        cout<<x<<endl;
        //        if(x>=0) ans= max(ans,j);
        //     }
        // }
        // cout<<a.size()+b.size() - 2*ans<<endl;
    }
      
    return 0;
}

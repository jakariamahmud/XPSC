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
        for(int i=0;i<b.size();i++){
            for(int j=1;j<=b.size()-i;j++){
                string x = b.substr(i,j);
                int y = a.find(x);
                if(y>-1) ans= max(ans,j);
            }
        }
        cout<<a.size()+b.size() - 2*ans<<endl;
    }
      
    return 0;
}

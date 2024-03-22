#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> s;
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            s.push_back(a);
        }
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int temp=0;
                for(int k=0;k<m;k++){
                    temp += abs((s[i][k]-'a')-(s[j][k]-'a'));
                    // cout<<s[i][k]-'a' << " - "<<s[j][k]-'a'<<"= "<<temp<<" ";
                }
                // cout<<" this "<<ans<<" ";
                ans = min(ans,temp);
                // cout<<temp<<endl;
            }
        }
        cout<<"ans" <<ans<<endl;
    }
    return 0;
}

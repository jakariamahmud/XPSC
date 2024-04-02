#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int x = v[i];
            if(m[x]!=0){
                ans++;
                while(m[x]>0){
                    m[x]--;
                    x++;
                }
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}

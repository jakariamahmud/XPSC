#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n; i++) cin>>v[i];
    unordered_map<int,int> m;
    int ans=0,ic=0;
    for (int i = 0; i < n; i++)
    {
        if(m[v[i]]==0){
            m[v[i]]++;
            ic++;
        }
        else{
            m.clear();
            m[v[i]]++;
            ans=max(ans,ic);
            ic=1;
        }
        if(i==n-1) ans=max(ans,ic);
    }
    cout<<ans<<endl;

    return 0;
}

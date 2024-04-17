
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for(int i=0;i<=m;i++) cin>>v[i];
    
    vector<vector<int> > mask;
    for(int i=0;i<=m;i++){
        vector<int> a;
        for(int j=0;j<n;j++){
            if((v[i] >> j) & 1){
                a.push_back(1);
            } 
            else {
                a.push_back(0); 
            }
        }
        mask.push_back(a);
    }
    

    int ans=0;
    vector<int> fedor = mask[m];
    for(int i=0;i<mask.size()-1;i++){
        vector<int> v = mask[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(fedor[j]!=v[j]) cnt++;
        }
        if(cnt<=k) ans++;
    }
    cout<<ans<<endl;
    
      
    return 0;
}
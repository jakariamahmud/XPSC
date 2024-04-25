#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n;
    cin>>n;
    vector<int> v(n);
    for(int  i=0;i<n;i++) cin>>v[i];
    bool f=0;
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int j=0;j<n;j++){
            (i&(1<<j)) ? sum+=v[j]: sum-=v[j];
        }
        if(!sum%360) f=1;
    }
    cout<<(f?"YES":"NO")<<'\n';
    return 0;
}
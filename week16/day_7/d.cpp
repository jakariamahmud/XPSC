#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,mx=0;cin>>n;
        vector<int> v(n);
        for(int &i:v){
            cin>>i;
            if(mx<i) mx=i;
        } 
        int ans=-1;
        for(int i=0;i<n;i++){
            if(v[i]==mx){
                if(i==0){
                    if(v[i]>v[i+1]){
                        ans=i+1;
                        break;
                    }       
                }
                else if(i==n-1){
                    if(v[i]> v[i-1]) {ans=i+1; break;}
                }
                else{
                    if(v[i]>v[i-1] || v[i]>v[i+1]) {ans=i+1; break;}
                }
            }
        }
        cout<<ans<<endl;

    }
      
    return 0;
}

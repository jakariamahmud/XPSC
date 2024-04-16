/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 16-04-2024 20:02:26       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<long long,long long> m;
        for(int i=0;i<n;i++){
            int x,ic=1;
            cin>>x;
            while(x>1){
                ic++;
                x = (x>>1);
            }
            m[ic]++;
        }
        long long ans=0;
        for(auto x:m){
            if(x.second>1) ans+=(x.second*(x.second-1)/2);
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

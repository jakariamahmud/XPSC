/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 16-04-2024 10:46:59       *
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
        vector<int> v(n);
        int ans=-1;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<(1<<8);i++){
            int x=0;
            for(int j=0;j<n;j++) x^=(v[j]^i);
            if(x==0){
                ans=i;
                break;
            } 
        }
        cout<<ans<<endl;

    }
      
    return 0;
}


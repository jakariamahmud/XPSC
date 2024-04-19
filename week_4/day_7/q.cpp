/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 17-04-2024 23:19:30       *
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
        int n,a;
        cin>>n;
        cin>>a;
        long long ans=a;
        for(int i=0;i<n-1;i++){
            long long x;
            cin>>x;
            ans&=x;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

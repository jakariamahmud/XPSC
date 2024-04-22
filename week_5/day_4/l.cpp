/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 22-04-2024 14:10:51       *
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
        long long ans=0;
        while(n--){
            long long x;
            cin>>x;
            if(ans+x>0) ans+=x;
            else ans=0;

        }
        cout<<"ans = "<<ans<<endl;
    }
      
    return 0;
}

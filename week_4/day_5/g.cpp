/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 16-04-2024 20:44:50       *
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
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans|=x;
        }
        cout<<ans<<endl;
    }
      
    return 0;
}

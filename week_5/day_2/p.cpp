/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 20-04-2024 18:07:41       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n,m;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int x=0,y=0,ans=0;
    while(x<n && y<m){
        if(abs(a[x]-b[y])<=1){
            ans++;
            x++;
            y++;
        }
        else if(a[x]>b[y]) y++;
        else x++;
    }
    cout<<ans<<endl;
      
    return 0;
}

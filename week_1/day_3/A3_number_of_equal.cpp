#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    long long ans=0;

    while(l<n && r<m){
        int cnt1=0,cnt2=0,c=a[l];
        while(a[l]==c && l<n){
            cnt1++;
            l++;
        }
        while(c>b[r]){
            r++;
        }
        while(b[r]==c && r<m){
            cnt2++;
            r++;
        }
        ans+=(1LL*cnt1*cnt2);
    }
    cout<<ans<<'\n';
    

    return 0;
}

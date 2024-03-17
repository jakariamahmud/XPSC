#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n],b[n],c[n];
        int ans1=0,ans2=0,ans3=0;
        map<string,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            mp[b[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>c[i];
            mp[c[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]==1) ans1=ans1+3;
            else if(mp[a[i]]==2) ans1++; 
        }
        for(int i=0;i<n;i++)
        {
            if(mp[b[i]]==1) ans2=ans2+3;
            else if(mp[b[i]]==2) ans2++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[c[i]]==1) ans3=ans3+3;
            else if(mp[c[i]]==2) ans3++;
        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
        

        
    }

    return 0;
}

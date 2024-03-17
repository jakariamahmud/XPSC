#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s,t;
    cin>>s>>t;
    int ans=0;
    long long inc=0;
    int x = max(s,t);
    for (int i = 0; i <= x; i++)
    {
        for(int j=0; j<=x; j++)
        {   
            for(int k=0; k<=x; k++)
            {
                if( i*j*k>x) break;
                if(i+j+k<=s && i*j*k<=t){
                    ans++;
                }
            }
        }
    }

    cout<<ans<<'\n';
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x,y,ans=0;
    cin>>x>>y;
    while(x<=y){
        x*=2;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}

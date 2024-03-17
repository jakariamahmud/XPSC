#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    while(c<=b)
    {
        if(c>=a) {
            ans=c;
            break;
        }

        else c+=c;
    }
    cout<<ans<<"\n";

    return 0;
}

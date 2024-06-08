#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    long long n,a,b,p,q,ans=0,dup;
    cin>>n>>a>>b>>p>>q;

    ans+=((n/a)*p + (n/b)*q);
    dup = (n/((a/__gcd(a,b))*b));

    cout<<(ans-min(dup*p,dup*q))<<endl;
      
    return 0;
}

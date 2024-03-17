#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    if(a>t)cout<<0<<'\n';
    else cout<<b*(t/a)<<endl;
    
    return 0;
}

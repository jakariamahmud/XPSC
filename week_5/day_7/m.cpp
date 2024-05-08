#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        cout<<((s%n<=b&&a*n+b>=s)?"YES":"NO")<<'\n';
    }
      
    return 0;
}

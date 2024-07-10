#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        long long mx=0,cost=0,opa=0;
        long long n;cin>>n;
        while(n--){
            long long a;cin>>a;
            if(a<mx){
                cost+=mx-a;
                opa=max(opa,mx-a);
            }
            else mx = max(mx,a);
        }
        cout<<cost+opa<<endl;
    }
      
    return 0;
}

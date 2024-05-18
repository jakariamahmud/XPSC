#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        bool f=1;
        long long b=k;
        while(f){
            k+=b/n;
            b=(b/n)+(b%n);
            if(b<n) f=0;
        }
        cout<<k<<endl;
    }
      
    return 0;
}

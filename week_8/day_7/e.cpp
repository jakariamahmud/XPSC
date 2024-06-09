#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    long long n;cin>>n;
    for(long long i=sqrt(n);i>0;i--){
        if(__gcd(i,n/i)==1 && (n%i)==0){
            cout<<i<<" "<<n/i<<endl;
            break;
        } 
    }
    return 0;
}

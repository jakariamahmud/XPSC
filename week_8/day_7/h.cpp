#include<bits/stdc++.h>
using namespace std;
bool prime(long long n){
    if(n==1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n;cin>>n;
    if(prime(n)) cout<<1;
    else if(!(n&1)) cout<<2;
    else{
        if(prime(n-2)) cout<<2;
        else cout<<3;
    }
    cout<<endl;
      
    return 0;
}

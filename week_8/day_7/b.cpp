#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        long long x,j;cin>>x;
        for(j=2;j*j<sqrt(x);j++){ 
            if(x%j==0) break;
        }
        long long sq = sqrt(x);
        if( x>1 && j*j>sq && sq*sq==x ) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
      
    return 0;
}

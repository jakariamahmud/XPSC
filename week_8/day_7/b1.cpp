#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    vector<int> a(N);
    for(int i=2;i<=N;i++){
        if(a[i]==0){
            for(int j=2;j*i<=N;j++){
                a[i*j]=1;
            }
        }
    }

    long long t,n,sq;cin>>t;
    while(t--){
        cin>>n;
        sq=sqrt(n);
        if(n==1) cout<<"NO"<<endl;
        else if(sq*sq==n && (a[sq]==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

      
    return 0;
}

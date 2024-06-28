#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        if(k==1) cout<<n<<endl;
        else{
            long long cnt=0;
            while(n!=0){
                if(n%k==0){
                    cnt++;
                }
                else {
                    cnt+=(n%k);
                    if(n/k) cnt++;
                }
                n=n/k;
            }
            cout<<cnt<<endl;
        }
    }
      
    return 0;
}

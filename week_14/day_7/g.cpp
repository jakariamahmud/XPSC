#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n&1){
            while(n--) cout<<1<<" ";
            cout<<endl;
        }
        else{
            n-=2;
            while(n--) cout<<4<<" ";
            cout<<2<<" "<<6<<endl;
        }
    }
      
    return 0;
}

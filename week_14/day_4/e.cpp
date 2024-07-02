#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int x,y,k;cin>>x>>y>>k;
        cout<<"ans - ";
        cout<<((k%(y-1)+1)%y? 1 : k%(y-1)+1)<<endl;

    }
      
    return 0;
}

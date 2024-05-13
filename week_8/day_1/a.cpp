#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        float l,a,b;
        cin>>l>>a>>b;
        int r1=ceil(l/a)-1,r2=ceil(l/b);
        if(r1==r2) cout<<0<<endl;
        else if(r1<r2) cout<<-1<<endl;
        else cout<<r1-r2<<endl;

    }
      
    return 0;
}

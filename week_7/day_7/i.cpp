#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
      
    int n;cin>>n;
    int j=0;
    for(int i=0;i<n;i++){
        if(j==0) cout<<"b";
        else if(j==1) cout<<"b";
        else if(j==2) cout<<"a";
        else if(j==3) cout<<"a";
        if(j==3) j=0;
        else j++;
        
    }
    cout<<endl;
      
    return 0;
}

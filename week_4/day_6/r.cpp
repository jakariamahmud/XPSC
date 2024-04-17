#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int o=0,a=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(a==-1) a =(1 << __lg(x)+1)-1;
            o|=x;
            a&=x;
        }
        cout<<(o-a)<<endl;
        
    }
      
    return 0;
}

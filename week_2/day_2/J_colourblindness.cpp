#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(a[i]=='R'){
                if(b[i]!='R'){
                    flag=false;
                }
            }
            if(b[i]=='R'){
                if(a[i]!='R'){
                    flag=false;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

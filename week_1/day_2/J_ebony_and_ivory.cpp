#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool l=true,flag=false;
    if(c%b==0) flag=true;
    if(c%a==0) flag=true;
    for (int i = 1; l; i++)
    {
        if(a==1 || b==1){
            flag=true;
            break;
        }
        int ans= a*i;
        if(ans>c) l=false;
        while(ans<=c)
        {
            if(ans==c){
                flag=true;
                l=false;
            }
            ans=ans+b;
            if(ans>c) break;;

        }
        
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    

    return 0;
}

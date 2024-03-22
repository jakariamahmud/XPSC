#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s;
    cin>>k>>s;
    int ans=0;
    if((s==k || (k%2==0))){
        if(s%2==0) ans=((s+2)/2)*(s+1);
        else ans= ((s+1)/2)*(s+2);
    }
    else{
        if((k*3)==s) ans=1;
        else if((k*3)<s){
            int x = s-(k*3);
            if((x+2)%2==0) ans=((x+2)/2)*(x+1);
            else ans=((x+1)/2)*(s+2);
        }
        else ans=0;
    }
    cout<<ans<<endl;
    return 0;
}

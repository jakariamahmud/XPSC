#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        string s,a;cin>>s;
        int b=0,B=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='b') b++;
            else if(s[i]=='B') B++;
            else{
                if(s[i]>='A' && s[i]<='Z'){
                    if(B) B--;
                    else a+=s[i];
                }
                else if( s[i]>='a' && s[i]<='z'){
                    if(b) b--;
                    else a+=s[i];
                }
            }
        }
        for(int i=a.size()-1;i>=0;i--) cout<<a[i];
        cout<<endl;
    }
      
    return 0;
}

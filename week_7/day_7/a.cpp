#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int i=0,ic=0;
        while(i<n-1){
            if(s[i]!=s[i+1]){
                s.erase(s.begin()+i,s.begin()+i+1);
                n-=2;
                ic++;
                if(i==n) i-=2;
                else if(i>=1) i--;
                
            }
            else i++;
            
        }
        if(ic&1)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
      
    return 0;
}

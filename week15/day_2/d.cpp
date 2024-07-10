#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> a = {"abc","bac","acb","cba"};
    int t;cin>>t;
    while(t--){

        string s;
        cin>>s;
        bool f=0;
        for(int i=0;i<4;i++){
            if(a[i]==s) f=1;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
      
    return 0;
}

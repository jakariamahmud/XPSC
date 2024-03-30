#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string c = "meow";
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]>'A' && s[i]<'Z') s[i]=char(s[i]+32);
        }
        int l=0,r=1,si=s.size();
        while(r<si)
        {
            if(s[l]==s[r]){
                s.erase(s.begin()+r);
                si=s.size();
            }
            else{
                l++;
                r++;
            }
        }
        if(s==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}

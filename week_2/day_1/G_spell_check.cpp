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
        string s;
        cin>>s;
        int a[127]={0};
        string x="Timur";
        for(int i=0;i<5;i++){
            char y = x[i];
            a[y]++;
        }
        for(int i=0;i<s.size();i++){
            char y = s[i];
            a[y]--;
        }
        bool flag = true;
        for(int i=0;i<127;i++){
            if(a[i]!=0) flag=false;
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }
    return 0;
}

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
        vector<char> c;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='0'){
                int x = s[i]-'0';
                c.push_back((x+'a')-1);
            } 
            else{
                int x=(((s[i-2]-'0')*10)+(s[i-1]-'0'));
                i-=2;
                c.push_back((x+'a')-1);
            }
        }
        for(int i=c.size()-1;i>=0;i--){
            cout<<c[i];
        }
        cout<<endl;
    }
      
    return 0;
}

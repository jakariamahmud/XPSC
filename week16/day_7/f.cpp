#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        queue<char> ch;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(ch.empty()) ch.push(s[i]);
            else{
                if(ch.front()!=s[i]){
                    ch.pop();
                    cnt++;
                }
                else ch.push(s[i]);
            }
        }
        if(cnt%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
      
    return 0;
}

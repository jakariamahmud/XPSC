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
        int i=0;
        queue<char> q;
        while(i<n){
            if(!q.empty() && s[i]!=q.front()){
                q.pop(); 
            }
            else q.push(s[i]);
            i++;
        }
        int x = (n-q.size())/2;
        if(x&1)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
      
    return 0;
}

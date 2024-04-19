#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<char,int>> v;
        char l,r;
        if(s[0]<s[s.size()-1]){
            l=s[0];
            r=s[s.size()-1];
        }
        else {
            l=s[s.size()-1];
            r=s[0];
        }
        for(int i=1;i<s.size()-1;i++){
            if(l<=s[i] && r>=s[i]){
                v.push_back({s[i],i+1});
            }
        }
        sort(v.begin(),v.end());
        if(s[0]>s[s.size()-1]) reverse(v.begin(),v.end());
        cout<<r-l<<" "<<v.size()+2<<endl<<1<<" ";
        for(pair<char,int> x:v)  cout<<x.second<<" ";
        cout<<s.size()<<endl;
        
    }
      
    return 0;
}

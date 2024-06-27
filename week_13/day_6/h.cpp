#include<bits/stdc++.h>
using namespace std;
string re(string st){
    int sz = st.size();
    for(int i=0;i<sz/2;i++){
        swap(st[i],st[sz-i-1]);
    }
    return st;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n,m;cin>>n>>m;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back({s,0});
    }
    vector<string> st1,st2;
    string mid;
    int d=0;
    for(auto &x:v){
        if(x.second==0) x.second=-1;

        for(auto &x2:v){
            if(x2.second==0){
                if(x.first==re(x2.first)){
                    st1.push_back(x.first);
                    st2.push_back(x2.first);
                    x.second=2;
                    x2.second=2;
                }
            }
        }
        if(x.second==-1){
            if(x.first==re(x.first)) {
                x.second=-2;
                mid=x.first;
                d=1;
            }
        }
        if(x.second==-1){
            x.second=0;
        } 
    }
    int siz = ((st1.size()*m)*2);
    if(d) siz+=m;
    cout<<siz<<endl;
    for(string x:st1) cout<<x;
    if(d) cout<<mid;
    for(int i=st2.size()-1;i>=0;i--) cout<<st2[i];
    cout<<endl;

    
    return 0;
}

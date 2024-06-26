#include<bits/stdc++.h>
using namespace std;
pair<int,int> re(int idx, int n, int k){
    idx = abs(idx);
    int a = (idx+k)%n;

    int b = (idx-k)%n;
    b = n-b;
    b = abs(b%n);
    return {a,b};


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        vector<int> v;
        int co=0,aco=0;
        for(int i=0;i<m;i++){
            int x; char c;
            cin>>x>>c;
            if(c=='?') v.push_back(x);
            else if(c=='1') aco+=x;
            else co+=x;
        }
        int sum = 0;
        for(int x:v) sum+=x;
        set<int> st;
        if(co>=aco){
            co-=aco;
            co+=k;
            co= co%n;
            if(co==0) co=n;
            pair<int,int> tm = re(sum,n,co);
            if(tm.first==0) st.insert(n);
            else st.insert(abs(tm.first));
            if(tm.second==0) st.insert(n);
            else st.insert(abs(tm.second));
            for(int i=1;i<v.size();i++){
                sum-=(v[i-1]*2);
                tm=re(sum,n,co);
                if(tm.first==0) st.insert(n);
                else st.insert(abs(tm.first));
                if(tm.second==0) st.insert(n);
                else st.insert(abs(tm.second));
            }

        }
        else{
            aco-=co;
            aco-=k;
            aco=aco%n;
            aco=n-aco;
            pair<int,int> tm = re(sum,n,aco);
            if(tm.first==0) st.insert(n);
            else st.insert(abs(tm.first));
            if(tm.second==0) st.insert(n);
            else st.insert(abs(tm.second));
            for(int i=1;i<v.size();i++){
                sum-=(v[i-1]*2);
                tm=re(sum,n,aco);
                if(tm.first==0) st.insert(n);
                else st.insert(abs(tm.first));
                if(tm.second==0) st.insert(n);
                else st.insert(abs(tm.second));
            }
        }
        // cout<<"ans ";
        cout<<st.size()<<endl;
        for(auto x:st) cout<<x<<" ";
        cout<<endl;
    }
      
    return 0;
}
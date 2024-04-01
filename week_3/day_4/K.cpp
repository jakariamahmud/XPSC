#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<pair<int,int>> a;
        priority_queue<pair<int,int>> b;
        priority_queue<pair<int,int>> c;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push({x,i});
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push({x,i});
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            c.push({x,i});
        }
        int ans=0;
        vector<int> v;
        if(a.top().first>=b.top().first){
            if(a.top().first>=c.top().first){
                ans+=a.top().first;
                v.push_back(a.top().second);
                if(b.top()>=c.top()){
                    if(b.top().second!=v[0]){
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    else{
                        b.pop();
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    if(c.top().second != v[0] || c.top().second != v[1]){
                        c.pop();
                        ans+=c.top().first;
                    }
                    else ans+=c.top().first;
                }
                else{
                    if(c.top().second!=v[0]){
                        ans+=c.top().first;
                        v.push_back(c.top().second);
                    }
                    else{
                        c.pop();
                        ans+=c.top().first;
                        v.push_back(c.top().second);
                    }
                    if(b.top().second != v[0] || b.top().second != v[1]){
                        b.pop();
                        ans+=b.top().first;
                    }
                    else ans+=b.top().first;
                }

            } 
            else{
                ans+=c.top().first;
                v.push_back(c.top().second);
                if(b.top()>=a.top()){
                    if(b.top().second!=v[0]){
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    else{
                        b.pop();
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    if(a.top().second != v[0] || a.top().second != v[1]){
                        a.pop();
                        ans+=a.top().first;
                    }
                    else ans+=a.top().first;
                }
                else{
                    if(a.top().second!=v[0]){
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    else{
                        a.pop();
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    if(b.top().second != v[0] || b.top().second != v[1]){
                        b.pop();
                        ans+=b.top().first;
                    }
                    else ans+=b.top().first;
                }
            }
        }
        else{
            if(b.top().first>=c.top().first){
                ans+=b.top().first;
                v.push_back(b.top().second);
                if(a.top()>=c.top()){
                    if(a.top().second!=v[0]){
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    else{
                        a.pop();
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    if(c.top().second != v[0] || c.top().second != v[1]){
                        c.pop();
                        ans+=c.top().first;
                    }
                    else ans+=c.top().first;
                }
                else{
                    if(c.top().second!=v[0]){
                        ans+=c.top().first;
                        v.push_back(c.top().second);
                    }
                    else{
                        c.pop();
                        ans+=c.top().first;
                        v.push_back(c.top().second);
                    }
                    if(a.top().second != v[0] || a.top().second != v[1]){
                        a.pop();
                        ans+=a.top().first;
                    }
                    else ans+=a.top().first;
                }
            } 
            else{
                ans+=c.top().first;
                v.push_back(c.top().second);
                if(b.top()>=a.top()){
                    if(b.top().second!=v[0]){
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    else{
                        b.pop();
                        ans+=b.top().first;
                        v.push_back(b.top().second);
                    }
                    if(a.top().second != v[0] || a.top().second != v[1]){
                        a.pop();
                        ans+=a.top().first;
                    }
                    else ans+=a.top().first;
                }
                else{
                    if(a.top().second!=v[0]){
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    else{
                        a.pop();
                        ans+=a.top().first;
                        v.push_back(a.top().second);
                    }
                    if(b.top().second != v[0] || b.top().second != v[1]){
                        b.pop();
                        ans+=b.top().first;
                    }
                    else ans+=b.top().first;
                }
            }
        }
        cout<<"ans-- " <<ans<<endl;
    }
    

    return 0;
}

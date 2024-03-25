#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        int a=0,b=n-1;
        while(a<b){
            if(v[a]!=v[b]){
                if(b-a == 1) {
                    v.erase(v.begin()+b);
                    break;
                }
                if(m[v[a]]>1){
                    m[v[a]]--;
                    v.erase(v.begin()+a);
                     
                }
                else if(m[v[b]]>1){
                    m[v[b]]--;
                    v.erase(v.begin()+b);
                }
                else{
                    a++;
                }
                b--;
            }
            else{
                a++;
                b--;
            }
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        a=0,b=v.size()-1;
        bool flag=true;
        if(v.size()>2){
            while(a<b){
            
                if(v[a]!=v[b]) flag=false;
                break;
                a++;
                b--;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }

    return 0;
}

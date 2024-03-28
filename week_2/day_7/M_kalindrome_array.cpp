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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ans = true;
        int a,b;
        int x=0,y=n-1;
        while(x<y){
            if(v[x]!=v[y]){
                a=v[x];
                b=v[y];
                ans=false;
                break;
            }
            x++;
            y--;
        }
        if(ans==0){
            vector<int> v1,v2;
            for(int i=0;i<n;i++){
                if(v[i]!=a) v1.push_back(v[i]);
                if(v[i]!=b) v2.push_back(v[i]);
            }
            x=0;y=v1.size()-1;
            bool ans1 = true;
            while(x<y){
                if(v1[x]!=v1[y]){
                    ans1=false;
                    break;
                }
                x++;
                y--;
            }
            x=0;y=v2.size()-1;
            bool ans2 = true;
            while(x<y){
                if(v2[x]!=v2[y]){
                    ans2=false;
                    break;
                }
                x++;
                y--;
            }
            if(ans1 || ans2) ans=true;
        }
        
        if(ans) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }

    return 0;
}

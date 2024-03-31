#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<long long> s[N];
        long long ans=0,y=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>0){
                if(s[y].size()==0) y++;
                s[y].push(x);
            }
            else{
                if(s[y].size()!=0){
                    ans+=s[y].top();
                    s[y].pop();   
                }
            }
        }
        cout<<ans<<'\n';
    }



    return 0;
}

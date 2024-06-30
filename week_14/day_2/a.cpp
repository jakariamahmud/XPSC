#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            m[x]++;
        }
        int cnt=0;
        bool f=1;
        for(int i=1;i<=n;i++){
            if(m[i]){
                m[i]--;
                cnt+=m[i];
            }
            else{
                if(cnt) cnt--;
                else{
                    f=0;
                    break;
                }
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
      
    return 0;
}
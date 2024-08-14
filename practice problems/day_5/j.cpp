#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const int N = 1e6+2;
    int t;cin>>t;
    while(t--){
        int n,m,k,x;cin>>n>>m>>k;
        vector<int>v1(N),v2(N);
        for(int i=0;i<n;i++){
            cin>>x;
            v1[x]++;
        }
        for(int i=0;i<m;i++){
            cin>>x;
            v2[x]++;
        }
        int cnt1=0,cnt2=0;
        for(int i=1;i<=k;i++){
            if(v1[i]){
                cnt1++;
            }
            if(v2[i]){
               cnt2++; 
            }

        }
        cout<<cnt1<<" "<<cnt2<<endl;
        if(cnt1>=k/2 && cnt2>=k/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
      
    return 0;
}

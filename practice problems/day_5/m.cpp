#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int &x:v) cin>>x;
        int mn=1,mx=n;
        int l=0,r=n-1,it=n;
        while(it--){
            if((v[l]!=mn && v[l]!=mx) && (v[r]!=mn && v[r]!=mx)){
                break;
            } 
            else{
                if(v[l]==mn){
                    l++;mn++;
                }
                else if( v[r]==mn){
                    r--; mn++;
                }
                if(v[l]==mx){
                    l++;mx--;
                }
                else if(v[r]==mx){
                    r--;mx--;
                }
            }
            if(l>n-1 || r<0) break;
        }
        if(l>r) cout<<-1<<endl;
        else cout<<l+1<<" "<<r+1<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long ch(int n, vector<long long> v){
    long long ans=0;
    long long on=0,sum=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            ans+=on;
        }
        else on++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> v(n);
        for(long long &x:v) cin>>x;
        long long ans = ch(n,v);
        int l=0,r=n-1,id=-1;
        bool f=0;
        while(l<n){
            if(v[l]==0){
                v[l]=1;
                id=l;f=1;
                break;
            } 
            l++;  
        }
        ans = max(ans,ch(n,v));
        if(f) v[id]=0;
        while(r>=0){
            if(v[r]==1){
                v[r]=0;
                break;
            }
            r--;
        }
        ans = max(ans,ch(n,v));
        cout<<ans<<endl;
        
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> v(n);
        for(long long &x:v) cin>>x;
        if(v.size()<3) cout<<1<<endl;
        else{
            long long fst = v[0],tm=v[0];
            cout<<1;
            for(int i=1;i<n;i++){
                if(tm<=v[i]) {
                    cout<<1;
                    tm=v[i];
                }
                else if(fst>=v[i]){
                    cout<<1;
                    long long lst = v[i-1];
                    tm=v[i];
                    i++;
                    while(i<n){
                        if(tm<=v[i] && fst>=v[i]){
                            cout<<1;
                            tm=v[i];
                        }
                        else cout<<0;
                        i++;
                    }
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
        
    }
      
    return 0;
}

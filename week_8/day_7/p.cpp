#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin >> x;
            for (int i = 2;i * i <= x;i++) {
                if (x % i == 0) {
                    while (x % i == 0) {
                        m[i]++;
                        x /= i;
                    }
                }
            }
            if(x>1) m[x]++;     
        }
        bool f=1;
        for(auto [x,y]:m){
            if(y%n) f=0;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
      
    return 0;
}

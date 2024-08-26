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
        vector<int> a,b;
        for(int i=0;i<n;i++){
            cin>> v[i];
            if(v[i]%2==1) a.push_back(i+1);
            else b.push_back(i+1);
        }
        if(a.size()>=3) cout<<"YES"<<endl<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        else if(a.size()>=1 && b.size()>=2) cout<<"YES"<<endl<<a[0]<<" "<<b[0]<<" "<<b[1]<<endl;
        else cout<<"NO"<<endl;
    }
      
    return 0;
}

/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 06-04-2024 13:27:40       *
    ****************************************
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int, int> m;
        for(int i=n-1;i>=0;i--){
            m[v[i]]++;
            if(m[v[i]]>1) break;
        }
        cout<<n-m.size()<<'\n';
        
    }
      
    return 0;
}

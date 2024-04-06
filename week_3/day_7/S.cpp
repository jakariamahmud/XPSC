/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 06-04-2024 13:52:28       *
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
        long long n,m,h;
        cin>>n>>m>>h;
        priority_queue<long long> pq1;
        priority_queue<long long> pq2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pq1.push(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            pq2.push(x);
        } 
        long long ans = 0;
        while(!pq1.empty() && !pq2.empty()){
            ans+=min(pq1.top(),pq2.top()*h);
            pq1.pop();
            pq2.pop();
        }
        cout<<ans<<'\n';

    }
      
    return 0;
}

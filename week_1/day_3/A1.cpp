#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<int,vector<int>, greater<int>> pq;
    while(n--){
        int x;
        cin>>x;
        pq.push(x);
    }
    while(m--){
        int x;
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}

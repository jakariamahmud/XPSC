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
        map<long long,int> m;
        for(int i=0;i<((n-1)*n)/2;i++) {
            long long x;
            cin>>x;
            m[x]++;
        }
        long long a=n-1,last;
        for(auto x:m){
            while(x.second!=0){
                cout<<x.first<<" ";
                x.second=x.second-a;
                a--;
            }
            last=x.first;
        }
        cout<<last<<endl;
    }
      
    return 0;
}

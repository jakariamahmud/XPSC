#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v[N];
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v[x].push_back(i);
            
        }
        int ic =0;
        for(int i=0;i<N;i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]>0){
                    cout<<i<<" "<<v[i][j]<<" ";
                    ic++;
                }
            }
            if(ic==n) break;
            cout<<endl;
        }

    }

    return 0;
}

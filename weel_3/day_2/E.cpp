#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[v[i][n-2]]++;
        }
        int a,b;
        for(int i=0;i<n;i++){
            if(m[v[i][n-2]]==1) a=i;
            else b=v[i][n-2];
        }
        for(int i=0;i<v[a].size();i++) cout<<v[a][i]<<" ";
        cout<< b<<endl;
    }

    return 0;
}

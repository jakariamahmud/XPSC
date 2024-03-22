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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string b;
            cin>>b;
            int ic=0;
            for(int j=0;j<x;j++){
                if(b[j]=='D'){
                    ic++;
                }
                else{
                    ic--;
                }
            }
            ic +=v[i];
            if(ic>9 ) cout<<ic%10<<" ";
            else if( ic<0) cout<<ic+10<<" ";
            else cout<<ic<<" ";


        }
        cout<<'\n';
    }
    return 0;
}

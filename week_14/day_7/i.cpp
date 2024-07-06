#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<char> v(n);
        for(char &x:v) cin>>x;
        int st=0,ed=0;
        for(int i=0;i<n;i++){
            if(v[i]=='B'){
                st=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]=='B'){
                ed=i;
                break;
            }
        }
        cout<<ed-st+1<<endl;
    }
      
    return 0;
}

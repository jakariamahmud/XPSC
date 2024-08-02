#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,x,a,b;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x]++;
        }
        bool f=0;
        for(int i=0;i<101;i++){
            if(m[i]<2 && f==0) {
                a=i;b=i;f=1;
            }
            if(m[i]<1 && f==1){
                b=i;break;
            }
        }
        cout<<a+b<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        int ic=0;
        int di=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            if(m[x]>ic){
                ic=m[x];
                di=x;
            }  
        }
        int a=n-ic;
        int ans =0;
        while(a>0){
            ans++;
            if(a<ic){
                ans+=a;
                break;
            }else{
                ans=ans+ic;
            }
            
            a-=ic;
            ic+=ic;
        }
        cout<<ans<<endl;

        


    }

    return 0;
}

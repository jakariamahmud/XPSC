#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int &x:v) cin>>x;
        sort(v.begin(),v.end(),greater<int>());
        int i=0,j=n-1,sum=0;
        vector<int> an;
        bool f=1;
        while(i<=j){
            if(v[i]!=sum){
                an.push_back(v[i]);
                sum+=v[i];
                i++;
            }
            else if(v[j]!=sum){
                an.push_back(v[j]);
                sum+=v[j];
                j--;
            }
            else{
                f=0;
                break;
            }
        }
        if(f) {
            cout<<"YES"<<endl;
            for(int x:an) cout<<x<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}

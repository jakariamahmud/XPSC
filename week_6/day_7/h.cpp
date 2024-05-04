#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    vector<long long> pw;
    for(int i=1;i<=N;i++){
        pw.push_back(pow(i,3));
    }
      
    // for(int i=0;i<N;i++){
    //     cout<<pw[i]<<" ";
    // }
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        bool found = false;

        for(int i=0;i<N;i++){
            if(pw[i] >= x) break;
            int  l=0,r=N-1, mid;
            long long need = x-pw[i];
            bool ok = false;
            while(l<=r){
                mid = l+(r-l) /2;
                if(pw[mid]==need){
                    ok = true;
                    break;
                }
                else if( pw[mid] > need)   r=mid-1;
                else l=mid+1;
            }
            if(ok) {
                found =1;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

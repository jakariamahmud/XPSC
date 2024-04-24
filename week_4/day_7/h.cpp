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
        string s;
        cin>>s;
        int i=0,j=s.size()-1;
        int match = 0, diff=0, od=s.size()%2;
        while(i<j){
            if(s[i]==s[j]) match++;
            else diff++;
            i++;
            j--;
        }
        int x =1;
        for(int i=0;i<=n;i++){
            if(i<diff || i>=s.size()-(diff-1)) cout<<0;
            else if(od) cout<<1;
            else{
                if(x==1){
                    cout<<x;
                    x=0;
                }
                else{
                    cout<<x;
                    x=1;
                }
            }
        }
        cout<<'\n';
    }
      
    return 0;
}

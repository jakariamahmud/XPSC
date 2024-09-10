#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        map<char,int> m;
        for(char x:s) m[x]++;
        char pre='&';
        while(true){
            int tm=0;
            for(char x:s){
                if(m[x]){
                    cout<<x;
                    m[x]--;
                    pre=x;
                    tm++;
                }
            }
            if(!tm) break;
        }
        cout<<endl;
    }
      
    return 0;
}

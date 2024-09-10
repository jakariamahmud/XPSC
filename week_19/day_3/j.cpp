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
        int cnt=0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='p'){
                if(s[i+1]=='i' && s[i+2]=='e'){
                    cnt++;
                    i+=2;
                }
            }
            else if(s[i]=='m'){
                if(s[i+1]=='a' && s[i+2]=='p'){
                    cnt++;
                    i+=2;
                }
            }
        }
        cout<<cnt<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ze=0,on=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') ze++;
            else on++;
        }
        for(int i=0;i<s.size();i++){
            cout<<ze<<" "<<on<<" "<<s[i]<<endl;
            if(s[i]=='0' && ze){
                cout<<"a";
                ze--;
            } 
            else if(s[i]=='1' && on){
                cout<<"b";
                on--;
            }
            else{
                cout<<"|";
                break;
            }  
        }
        cout<<ze+on<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        int a=0,b=0;
        int ic=0, ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') ic++;
            else ic--;
            if(ans>ic) ans--;
        }
        cout<<abs(ans)<<endl;
    }

    return 0;
}

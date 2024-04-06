/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 06-04-2024 16:48:21       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    map<string , int > m;
    for(int i=n-1;i>=0;i--){
        m[s[i]]++;
        if(m[s[i]]==1) cout<<s[i][s[i].size()-2]<<s[i][s[i].size()-1];
    }
      
    return 0;
}

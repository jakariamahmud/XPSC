#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    int ans=-1;
    for (int i = 0; i < s.size(); i++)
    {
        a[(s[i]-'a')]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(a[i]==0){
            ans=i;
            break;
        }
    }

    if(ans==-1) cout<<"None"<<"\n";
    else {
        char x = ans+'a';
        cout<<x<<'\n';
    }
    

    return 0;
}

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
        int x = __lg(n-1);
        for(int i=n-1;__lg(i)==x;i--) cout<<i<<" ";
        for(int i=0;__lg(i)<=x-1;i++) cout<<i<<" ";
        cout<<endl;
    }
      
    return 0;
}

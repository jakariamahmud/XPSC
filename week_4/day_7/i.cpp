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
        int x = (1<<__lg(n));
        cout<<n-x<<" " <<x<<endl;
    }
    return 0;
}

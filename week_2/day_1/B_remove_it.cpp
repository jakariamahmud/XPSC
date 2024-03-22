#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a!=x) cout<<a<<" ";
    }
    return 0;
}

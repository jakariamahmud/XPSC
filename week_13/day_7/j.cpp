#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    long long n;cin>>n;
    vector<long long> v(n);
    for(long long &x:v) cin>>x;
    long long tm=0;
    for(int i=0;i<n;i++){
        cout<<tm+v[i]<<" ";
        tm = max(tm,tm+v[i]);
    }
      
    return 0;
}

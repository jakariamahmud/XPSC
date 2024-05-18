#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int a = n%9;
        cout<<(45*(n/9))+a*(a+1)/2<<endl;
    }
      
    return 0;
}

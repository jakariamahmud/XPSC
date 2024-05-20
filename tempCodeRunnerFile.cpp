#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t; cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int a = y/2;
        int b = 7*a;
        if(y%2){
            b+=11;
            a++;
        } 
        int c=x-b;
        if(c>0){
            a+=(c/15);
            if(c%15) a++;
        }
        cout<<a<<endl;
    }
      
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n;cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        while(n) {
            cout<<2<<" ";
            n-=2;
        }
    }
    else{
        cout<<n/2<<endl;
        n-=3;
        while(n) {
            cout<<2<<" ";
            n-=2;
        }
        cout<<3<<" ";
    }
    cout<<endl;
      
    return 0;
}

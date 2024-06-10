#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    double x,y;cin>>x>>y;
    if(x*log(y)>y*log(x)) cout<<"<"<<endl;
    else if(x*log(y)<y*log(x)) cout<<">"<<endl;
    else cout<<"="<<endl;
      
    return 0;
}

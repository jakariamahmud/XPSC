#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int as = a.size(), bs = b.size();
        if(a==b) cout<<"="<<endl;
        else if(a[as-1]=='S' && b[bs-1]=='S'){
            if(as>bs) cout<<"<"<<endl;
            else if(as<bs) cout<<">"<<endl;
            else cout<<"="<<endl;
        }
        else if(a[as-1]=='L' && b[bs-1]=='L'){
            if(as>bs) cout<<">"<<endl;
            else if(as<bs) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
        else if( a[as-1] =='S' && b[bs-1]=='M') cout<<"<"<<endl;
        else if( a[as-1] =='M' && b[bs-1]=='S') cout<<">"<<endl;
        else if( a[as-1] =='S' && b[bs-1]=='L') cout<<"<"<<endl;
        else if( a[as-1] =='L' && b[bs-1]=='S') cout<<">"<<endl;
        else if( a[as-1] =='M' && b[bs-1]=='L') cout<<"<"<<endl;
        else if( a[as-1] =='L' && b[bs-1]=='M') cout<<">"<<endl;
        



    }

    return 0;
}

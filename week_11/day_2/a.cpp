#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int n,m,x,d;
        set<int> s,s1;
        char c;

        cin>>n>>m>>x;
        s.clear(); s1.clear(); s.insert(x);
        while(m--){
            cin>>d>>c;
            cout<<"jakaria"<<endl;
            if(c!='1'){
                for(int it:s) {
                    cout<<"not 1"<<endl;
                    cout<<1<<" - "<<it<<" "<<(it+d-1)<<"%"<<n << "  " <<((it+d-1)%n+1)<<endl;
                    s1.insert((it+d-1)%n+1);
                }
            }
            if(c!='0'){
                for(int it:s){
                    cout<<"not 0"<<endl;
                    cout<<1<<" - "<<it<<" "<<(it+n-d-1)<<"%"<<n <<"   "<<((it+n-d-1)%n+1)<<endl;
                    s1.insert((it+n-d-1)%n+1);
                } 
            }
            s = s1; s1.clear();
        }
        cout<<s.size()<<endl;
        for(int it:s) cout<<it<<" "; cout<<endl;
    }
      
    return 0;
}

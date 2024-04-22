#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int ans =0;
        for(int i=0;i<a.size();i++){
            int x=i;
            for(int j=0;j<b.size();j++){
                if(a[x]==b[j])
                {
                    int y=0;
                    while((a[x]==b[j]) && j<b.size()){
                        j++;
                        x++;
                        y++;
                    }
                    ans=max(ans,y);
                    j--;
                }
                
            }
        }
        cout<<(a.size()+b.size())-(ans*2)<<endl;
    }
      
    return 0;
}

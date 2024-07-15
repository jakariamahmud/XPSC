#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;cin>>t;
    while(t--){
        int sum=0;
        char c;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>c;
                if(c=='X'){
                    if(i==0 || j==0 || i==9 || j==9) sum+=1;
                    else if(i==1 || j==1 || i==8 || j==8) sum+=2;
                    else if(i==2 || j==2 || i==7 || j==7) sum+=3;
                    else if(i==3 || j==3 || i==6 || j==6) sum+=4;
                    else if(i==4 || j==4 || i==5 || j==5) sum+=5;
                }
            }
        }
        cout<<sum<<endl;
    }
      
    return 0;
}

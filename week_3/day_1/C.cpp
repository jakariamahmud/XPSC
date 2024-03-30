#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200][200];
bool valid(int i, int j){
    return (i<n && i>=0) && (j<m && j>=0);
}
long long sum1(int x, int y){
    long long su =0;
    int i=x,j=y;
    
    while(valid(i,j)){
        su+= a[i][j];
        i--;
        j--;
    }
    i=x,j=y;
    while(valid(i,j)){
        su+= a[i][j];
        i--;
        j++;
        
    }
    i=x,j=y;
    while(valid(i,j)){
        su+= a[i][j];
        i++;
        j--;
        
    }
    i=x,j=y;
    while(valid(i,j)){
        su+= a[i][j];
        i++;
        j++;
        
    }
    su = su-((a[x][y])*3);
    return su;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans= max(sum1(i,j),ans);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

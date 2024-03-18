#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    while(l<n || r<m){
        if(l==n){
            while(r<m){
                cout<<b[r]<<" ";
                r++;
            }
        }
        else if(r==m){
            while(l<n){
                cout<<a[l]<<" ";
                l++;
            }
        }
        else if(a[l]<b[r]){
            cout<<a[l]<<" ";
            l++;
        }
        else{
            cout<<b[r]<<" ";
            r++;
        }
    }
    
    

    return 0;
}

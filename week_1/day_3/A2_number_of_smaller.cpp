#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    long long r=0,l=0;
    while(r<m)
    {
        if(b[r]>a[l] && l<n){
            l++;
        }
        else{
            v.push_back(l);
            r++;
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
    
    

    return 0;
}

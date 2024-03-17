#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n-1; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+(n-1));
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    int v;
    for (int i = 1; i <= n; i++)
    {
        if(a[i-1]!= i)
        {
            v=i;
            break;
        } 
    }
    cout<<v<<'\n';
 
    
    

    return 0;
}

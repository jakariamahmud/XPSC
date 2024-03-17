#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[4]={0};
    for (int i = 0; i < 4; i++)
    {
        a[i]=n%10;
        n=n/10;
    }

    for (int i = 3; i >= 0; i--)
    {
        cout<<a[i];
    }
    
    

    return 0;
}

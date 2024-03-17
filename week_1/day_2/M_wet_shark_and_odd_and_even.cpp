#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    sort(a,a+n);
    if(sum%2==0) cout<<sum<<endl;
    else{
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 1){
                cout<<sum-a[i]<<endl;
                break;
            }
        }
        
    }
    
    

    return 0;
}

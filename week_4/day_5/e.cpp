/*
    ****************************************
    *      Auther:  Jakaria Mahmud         *
    *      Date: 16-04-2024 12:20:24       *
    ****************************************
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ic=0;
        while(n>1){
            n=n/2;
            ic++;
        } 
        cout<<(1<<ic)-1<<endl;
    }
      
    return 0;
}

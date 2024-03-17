#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    list<int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    while(l<n || r<m){
        if(a[l]<b[r] && r<m){
            c.push_front(b[r]);
            r++;
        }
        else if(a[l]>b[r] && l<n){
            c.push_back(a[l]);
            l++;
        }
    }
    for(int v:c){
        cout<<v<<" ";
    }

    return 0;
}

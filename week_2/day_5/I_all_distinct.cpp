#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        int size = st.size();
        int a=n-size;
        int result = size-a%2;
        cout<<result<<endl;
    }

    return 0;
}

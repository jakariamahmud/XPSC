#include<bits/stdc++.h>
using namespace std;
const int N =(1 << 15);
vector<int> p;

void mark_palindrome(){
    for(int i=0;i<N;i++){
        string s = to_string(i);
        int  len = s.length();
        bool ok = true;
        for(int i=0;i<(len/2);i++){
            if(s[i] != s[len - i - 1]){
                ok= false;
                break;
            }
        }
        if(ok){
            p.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    mark_palindrome();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
            v.push_back(x);
        }
        
        long long ans=n;

        for(int i=0;i<n;i++){
            for(int j=0;j<p.size();j++){
                int ic = (v[i] ^ p[j]);
                ans+=m[ic];
            }
        }
        cout<<(ans/2)<<endl;
    }
    
      
    return 0;
}

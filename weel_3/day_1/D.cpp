#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int> m;
        string a[n];
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            a[i]=s;
            m[s]++;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            bool flag = false;
            string x;
            for(int j=0;j<a[i].size()-1;j++){ 
                string y;
                x+=a[i][j];
                for(int k=j+1; k<a[i].size();k++){
                    y+=a[i][k];
                }
                if(m[x]>0 && m[y]>0){
                    flag = true;
                }
            }
            if(flag) v.push_back(1);
            else v.push_back(0);
        }
        for(int ind:v) cout<<ind;
        cout<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<long long> suff(n),pref(n);
        for (int i = 0; i < n; i++)
        {
            pref[i]+=i;
            suff[i]+=n-i-1;
        }
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'L'){
                sum+=pref[i];
            }
            else{
                sum+=suff[i];
            }
        }
        priority_queue<long long,vector<long long>, greater<long long> > pq;
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]=='L'){
                sum-=pref[l];
                sum+=suff[l];
                pq.push(sum);
            }
            if(s[r]=='R'){
                sum-=suff[r];
                sum+=pref[r];
                pq.push(sum);
            }
            l++;
            r--;
        }
        int x = pq.size();
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        for(int i=0;i<s.size()-x;i++){
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}

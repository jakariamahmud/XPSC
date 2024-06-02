#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	  
	int t;cin>>t;
	while(t--){
		long long n,k,x,ans=0;cin>>n>>k;
		vector<long long> ne,po;
		for(int i=0;i<n;i++){
			cin>>x;
			x>0?po.push_back(x):ne.push_back(-x);
		}
		sort(po.begin(),po.end(),greater<long long>());
		sort(ne.begin(),ne.end(),greater<long long>());
		if(ne.size()==0 && po.size()!=0){
			for(int i=0;i<po.size();i+=k) ans+=po[i]*2;
			ans-=po[0];
		}
		else if(po.size()==0 && ne.size()!=0){
			for(int i=0;i<ne.size();i+=k) ans+=ne[i]*2;
			ans-=ne[0];
		}
		else{
			for(int i=0;i<po.size();i+=k) ans+=po[i]*2;
			for(int i=0;i<ne.size();i+=k) ans+=ne[i]*2;
			if(po[0]>=ne[0]) ans-=po[0];
			else ans-=ne[0];
		}
		cout<<ans<<endl;
	}
	  
	return 0;
}

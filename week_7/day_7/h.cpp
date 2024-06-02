#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	  
	int t;cin>>t;
	while(t--){
		ll n,x,ans=0;cin>>n;
		map<ll,ll> m,f;
		for(int i=1;i<=n;i++){
			cin>>x;m[x]++;
		}
		for(auto a:m){
			for(int i=a.first;i<=n;i+=a.first){
				f[i]+=a.second;
				if(ans<f[i]) ans=f[i];
			}
		}
		cout<<ans<<'\n';
	}
	  
	return 0;
}

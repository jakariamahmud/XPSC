#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		int a=0,ic=0;
		long long sum =0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
			sum+=abs(x);
			if(v[i]<0) a=1;
			else if(v[i]>0){
				ic+=a;
				a=0;
			}
		}
		ic+=a;		
		cout<<sum<<" "<<ic<<endl;
	}
 
	return 0;
}
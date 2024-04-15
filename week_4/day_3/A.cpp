#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, xo=0;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        xo^=v[i];
	    }
	    int ans= xo;
	    for(int i=0;i<n;i++){
	        ans = min(ans, (xo ^ v[i]));
	    }
	    cout<<ans<<endl;
	}

}

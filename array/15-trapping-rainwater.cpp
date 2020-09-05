
#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll find_water_trapped(vector<ll>& X, int n){
	
	vector<ll> left(n, 0);
	vector<ll> right(n, 0);
	ll water_trapped = 0;
	ll min_trap = 0;

	for(int i = 1; i< n; i++){
		left[i] = max(X[i-1], left[i-1]);
		right[n-i-1] = max(X[n-i], right[n-i]); 
	}
	
	for(int i = 1; i < n-1; i++)
		water_trapped += max(min(left[i], right[i]) - X[i], min_trap) ;

	return (water_trapped>0)?water_trapped:0;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> X(n, 0);
		for(int i =0; i<n; i++) cin>>X[i];

		ll trapped_water_amt = find_water_trapped(X, n);
	
		cout<<trapped_water_amt;
		cout<<endl;
	}
	return 0;
}
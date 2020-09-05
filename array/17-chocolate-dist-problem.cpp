
#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll find_min_diff(const vector<ll>& X, int n, int k ){
	if(n == k) 
		return X[n-1] - X[0];

	int p1 = k-1;
	ll ans = LLONG_MAX;
	for(int i=0; i<=n-k; i++){
		ans = min(ans, (X[p1] - X[i]));
		p1++;
	}

	return ans;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n;
		vector<ll> X(n, 0);
		for(int i =0; i<n; i++) cin>>X[i];
		cin>>k;


		sort(X.begin(), X.end());
	
		cout<<find_min_diff(X, n, k);

		cout<<endl;
	}
	return 0;
}
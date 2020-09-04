
#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll find_kth_smallest(vector<ll>& X, int k){
	sort(X.begin(), X.end());

	return X[k-1];
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

		ll kth_smallest = find_kth_smallest(X, k);
		cout<<kth_smallest;

		cout<<endl;
	}
	return 0;
}
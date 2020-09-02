
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll find_equlibrium(vector<ll>& X, int n){

	ll sum = 0;
	ll left = 0;

	if(n == 1) return n;

	for(auto x: X)
		sum += x;

	for(int i = 1; i<n-1; i++){
		left += X[i-1];
		if(sum - (left+X[i]) == left)
			return i+1;
	}
	
	return -1;
}


int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> X(n, 0);

		for(int i=0; i<n; i++) cin>>X[i];
	
		ll idx = find_equlibrium(X, n);
		cout<<idx;
		
		cout<<endl;		
	}
	return 0;
}
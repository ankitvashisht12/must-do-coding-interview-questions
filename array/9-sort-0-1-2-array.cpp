
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void sort_array(vector<ll>& X, int n){
	int count_0 = 0, count_1=0;
	for(auto x : X){
		if(x == 0) count_0++;
		else if(x == 1) count_1++;
	}
	int i =0;
	while(count_0--){
		X[i] = 0;
		i++;
	}

	while(count_1--){
		X[i] = 1;
		i++;
	}

	for(; i<X.size(); i++) X[i] = 2;
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
	
		sort_array(X, n);
		for(auto x : X)
			cout<<x<<" "; 
		
		cout<<endl;		
	}
	return 0;
}
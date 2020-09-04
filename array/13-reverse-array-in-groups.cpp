
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void reverse_array_in_groups(vector<ll>& X, int n, int k, ll max_ele){
	int i =0, j = k-1, z = 1;

	for(; i < n; i++){
		while(j >= n) j--;
	
		X[i] += ( X[j] % max_ele ) * max_ele;
		j--;

		if((j + 1) % k == 0){
			z++;
			j = (k * z) - 1;
		}
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<ll> X(n, 0);
		for(int i =0; i<n; i++) cin>>X[i];
	
		ll max_ele = *max_element(X.begin(), X.end()) + 1;

		reverse_array_in_groups(X, n, k, max_ele);
		
		for(auto x : X)
			cout<<x / max_ele<<" ";
		cout<<endl;
	}
	return 0;
}
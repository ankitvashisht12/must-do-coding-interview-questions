#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ===============================================
/// O(N^2) time complexity : Using Multiset


ll find_inversion_count(vector<ll>& X, int n){
	multiset<ll> _mSet;
	ll inv_count = 0; 
	for(auto x : X){
		_mSet.insert(x);
		inv_count += distance(upper_bound(_mSet.begin(), _mSet.end(), x), _mSet.end());
	}
	return inv_count;
}
// ================================================


// ================================================
/// TODO: O(NlogN) TC : using merge-sort technique
// ll find_inversion_count(vector<ll>& X, int n){
	
// }
// ================================================

// ================================================
/// TODO: BIT Technique ( Binary Index Tree )
// ================================================

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
	
		ll inv_count = find_inversion_count(X, n);

		cout<<inv_count<<endl;		
	}
	return 0;
}
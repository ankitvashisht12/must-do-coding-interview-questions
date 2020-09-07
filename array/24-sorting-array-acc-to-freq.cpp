// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0/


#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool custom_compare(pair<ll, ll> a, pair<ll, ll> b){
	if(a.first == b.first)
		return a.second < b.second;
	
	return a.first > b.first;
}

void sort_acc_to_freq(vector<ll>& X, int n){
	unordered_map<ll, ll> _m;
	set<pair<ll, ll>, decltype(&custom_compare)> _st(&custom_compare);
	for(auto x : X)
		_m[x]++;

	for(auto p : _m){
		_st.insert({p.second, p.first});
	}

	for(auto s : _st){
		int freq = s.first;
		while(freq--) cout<<s.second<<" ";
	}
	 
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
		

		sort_acc_to_freq(X, n);
		
		cout<<endl;
	}
	return 0;
}
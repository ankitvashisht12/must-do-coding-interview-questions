
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll find_ele(const vector<ll>& X, int n){
	vector<bool> left(n, false), right(n, false);
	ll max_ele_till_now = X[0];
	ll min_ele_till_now = X[n-1];
	for(int i = 1; i<n-1; i++){
		if(max_ele_till_now <= X[i]){
			left[i] = true;
			 max_ele_till_now = max(max_ele_till_now, X[i]);
		}

		if(min_ele_till_now >= X[n-i-1]){
			right[n-i-1] = true;
			min_ele_till_now = min(min_ele_till_now , X[n-i-1]);
		}
	}


	for(int i = 1; i<n-1; i++){
		if(left[i] && right[i])
			return X[i];
	}

	return -1;

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
		

		cout<<find_ele(X, n);
		
		cout<<endl;
	}
	return 0;
}
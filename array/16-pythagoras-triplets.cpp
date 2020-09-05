
#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool has_pythagoras_triplets(const vector<ll>& X, int n){

	set<ll> _s;
	for(auto x : X)
		_s.insert(x);

	for(int i =0; i< n-1; i++){
		for(int j = i+1; j < n; j++){
			if(_s.count((X[i]+ X[j]))){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> X;
		for(int i =0; i<n; i++) {
			ll temp ;
			cin>>temp;
			X.push_back(temp*temp);
		}

		if(has_pythagoras_triplets(X, n))
			cout<<"Yes";
		else cout<<"No";

		cout<<endl;
	}
	return 0;
}
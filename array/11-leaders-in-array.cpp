
#include<bits/stdc++.h>
using namespace std;

#define ll long long


vector<ll> find_leaders(vector<ll>& X, ll n){
	vector<ll> leaders;
	stack<ll> _st;

	_st.push(X[n-1]);

	for(auto i = n-2; i >= 0; i--){
		if(_st.top() <= X[i])
			_st.push(X[i]);
	}


	while(!_st.empty()){
		leaders.push_back(_st.top());
		_st.pop();
	}

	return leaders;
}

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> X(n, 0);

		for(int i=0; i<n; i++) cin>>X[i];
		
		vector<ll> leaders = find_leaders(X, n);
		
		for(auto l : leaders)
			cout<<l<<" ";
		
		cout<<endl;		
	}
	return 0;
}
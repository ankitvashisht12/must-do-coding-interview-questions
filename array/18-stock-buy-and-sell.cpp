
#include<bits/stdc++.h>
using namespace std;

#define ll long long


vector<pair<int, int>> find_max_profit(const vector<ll>& X, int n){
	vector<pair<int, int>> ans;
	int low_init = 0;
	for(int i = 1; i<n; i++){
		if(X[low_init] > X[i]){
			low_init = i;
		}else break;
	}

	int high_init = n-1;
	for(int i = n-2; i >= 0; i--){
		if(X[high_init] < X[i]){
			high_init = i;
		}else break;
	}


	int i = low_init;
	while(i < high_init){
		if(X[i] > X[i+1]){
			if(low_init < i)
				ans.push_back({low_init,i});
			low_init = i+1;
		}
		i++;
	}
	
	if(low_init < high_init)
		ans.push_back({low_init, high_init});
	return ans;



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
		

		vector<pair<int, int>> ans =  find_max_profit(X, n);

		if(ans.size())
			for(auto p : ans)
				cout<<"("<<p.first<<" "<<p.second<<") ";
		else
			cout<<"No Profit";		
		cout<<endl;
	}
	return 0;
}
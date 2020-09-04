
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll find_number_of_platforms(const vector<ll>& arrival,const vector<ll>& departure, int n){

	ll max_platorm = 1, platform_use = 1;
	int i = 1, j = 0;

	while(i < n){
		if(arrival[i] <= departure[j]){
			platform_use++;
			max_platorm = max(max_platorm, platform_use);
			i++;
		}else{
			j++;
			platform_use--;
		}
	}

	return max_platorm;

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
		vector<ll> Y(n, 0);
		for(int i =0; i<n; i++) cin>>X[i];
		for(int i =0; i<n; i++) cin>>Y[i];

		sort(X.begin(), X.end());
		sort(Y.begin(), Y.end());

		ll platforms = find_number_of_platforms(X, Y, n);

		
		cout<<platforms<<endl;
	}
	return 0;
}
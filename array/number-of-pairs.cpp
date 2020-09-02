// NOT YET SOLVED COMPLETELY

/* Algorithm
 * for any value x and y for which x < y the condition holds true but
 * handle exception for x = 0, 1 properly
 * and for x = 2 and y = 3, 4 also.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll find_pairs(vector<ll> X, vector<ll> Y, int n, int m){

	sort(Y.begin(), Y.end());
	int count_zeros = 0, count_ones = 0;
	while(Y[count_zeros] == 0) count_zeros++;

	for(int i = count_zeros; i < Y.size(); i++){
		if(Y[i] == 1) 
			count_ones++;
	}

	ll count_pairs = 0;
	for(auto x : X){
		if(x == 0) continue;

		if(x == 1){
			count_pairs += count_zeros;
			continue;
		}

		int idx = upper_bound(Y.begin(), Y.end(), x) - Y.begin();

		if(x == 2){
			while (Y[idx] == 3 || Y[idx] == 4){
				idx++;
			}
		}

		count_pairs += Y.size() - idx;
		count_pairs += count_zeros;
		count_pairs += count_ones;
	}

	return count_pairs;

}


int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		vector<ll> X(n, 0);
		vector<ll> Y(m, 0);
		
		for(int i=0; i<n; i++) cin>>X[i];
		for(int i=0; i<m; i++) cin>>Y[i];
		
	
		ll count = find_pairs(X, Y, n, m);

		cout<<count<<endl;		
	}
	return 0;
}
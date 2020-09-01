#include<bits/stdc++.h>
using namespace std;

int count_triplets(vector<int> arr, int n){
	int ans = -1;
	unordered_set<int> _set;

	for(auto i : arr){
		_set.insert(i);
	}

	for(int i=0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(_set.count(arr[i] + arr[j])) ans++;
		}
	}
	
	if(ans != -1){
		return ans+1;
	}

	return -1;
}

int main()
 {
	int t; 
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		vector<int> arr(n, 0);

		for(int i=0; i<n; i++){
			cin>>arr[i];
		}

		int ans = count_triplets(arr, n);
		cout<<ans<<endl;
	}
	return 0;
}
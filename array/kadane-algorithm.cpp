#include<bits/stdc++.h>
using namespace std;



long long kadane_algorithm(vector<long long> arr, int n){
	long long currMax= 0, ovMax = 0;
	long long min_ele = LLONG_MIN;
	for(auto x : arr){
		min_ele = max(min_ele, x);
		currMax = max(currMax+x, x);
		ovMax = max(ovMax, currMax);
	}

	if(ovMax == 0){
		return min_ele;
	}

	return ovMax;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long> arr(n, 0);
		for(int i=0; i<n; i++) cin>>arr[i];

		long long s = kadane_algorithm(arr, n);
		cout<<s<<endl;
	}
	return 0;
}
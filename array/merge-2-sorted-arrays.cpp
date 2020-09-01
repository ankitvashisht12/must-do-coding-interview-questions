/* Algorithm
 * Use two pointer p1 and p2 for array1 and array2 respectively.
 * traverse array1 from last and array2 from first index.
 * swap elements if (arr1[p1] > arr2[p2])
 * Done.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void merge_two_sorted_arrays(vector<ll>& arr1, vector<ll>& arr2, int n, int m){
	
	int p1 = n-1;
	int p2 = 0;

	while(p1 >= 0 && p2 < m){
		if(arr1[p1] > arr2[p2]){
			int temp = arr1[p1];
			arr1[p1] = arr2[p2];
			arr2[p2] = temp;
		}

		p1--;
		p2++;
	}
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
		vector<ll> arr1(n, 0);
		vector<ll> arr2(m, 0);
		for(int i=0; i<n; i++) cin>>arr1[i];
		for(int i=0; i<m; i++) cin>>arr2[i];

		merge_two_sorted_arrays(arr1, arr2, n, m);

		sort(arr1.begin(), arr1.end());
		sort(arr2.begin(), arr2.end());
		
		for(auto x : arr1)
			cout<<x<<" ";

		for(auto y : arr2)
			cout<<y<<" ";

		cout<<endl;		
	}
	return 0;
}
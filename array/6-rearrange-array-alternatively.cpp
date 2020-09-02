/* Algorithm
 * Using n1 = n1 + ( n2 % max_element) + max_element
 * max_element is one plus maximum element present in array
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void rearrange_array_alt(vector<ll>& arr, int n, ll max_ele){

	int low = 0, high = n-1;
	for(int i =0; i<n; i++){
		if(i&1){
			arr[i] += (arr[low] % max_ele) * max_ele;
			low++;
		}else{
			arr[i] += (arr[high] % max_ele) * max_ele;
			high--;
		}
	}

	for(int i = 0; i< n; i++){
		arr[i] /= max_ele;
	}
}

int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> arr(n, 0);
		for(int i=0; i<n; i++) cin>>arr[i];
		
		ll max_ele = *max_element(arr.begin(), arr.end()) + 1;
		cout<<endl;
		rearrange_array_alt(arr, n, max_ele);

		for(auto x : arr){
			cout<<x<<" ";
		}
		cout<<endl;		
	}
	return 0;
}
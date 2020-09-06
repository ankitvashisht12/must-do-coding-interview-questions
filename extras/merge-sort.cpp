/*
	* Algorithm :-
	* 1. Divide the array into two possible equal half
		* 1.a find middle position idx
	* 2. Recursively sort two arrays by calling merge_sort for each left and right array
	* 3. call merge function to merge both array	
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long


void merge(vector<ll>& X, int start, int end, int mid){
	int i =0, j=0, k=start;
	int l_size = mid - start + 1;
	int r_size = end - mid;

	vector<ll> left(l_size, 0);
	vector<ll> right(r_size, 0);

	for(; i < l_size; i++) left[i] = X[start+i];
	for(; j < r_size; j++) right[j] = X[mid+1+j];

	i =0, j =0;

	while(i < l_size && j < r_size){
		if(left[i] <= right[j]){
			X[k] = left[i];
			i++;
		}else{
			X[k] = right[j];
			j++;
		}
		k++;
	}

	while(i < l_size){
		X[k] = left[i];
		i++;
		k++;
	}

	while(j < r_size){
		X[k] = right[j];
		j++;
		k++;
	}
}

void merge_sort(vector<ll>& X, int start, int end){
	
	if(start < end){
		
		int mid = start + ( end - start) / 2; 
		merge_sort(X, start, mid);
		merge_sort(X, mid+1, end);

		merge(X, start, end, mid);
	}	
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> X(n, 0);
		for(int i =0; i<n; i++) cin>>X[i];

		merge_sort(X, 0, n-1);

		for(auto x : X)
			cout<<x<<" ";
		
		cout<<endl;
	}
	return 0;
}
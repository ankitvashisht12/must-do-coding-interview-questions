#include<bits/stdc++.h>
using namespace std;

int find_missing_number(vector<int> &arr, int n){
    
	int sum;
	if(n&1){
		sum = n*((n+1)/2);
	}else sum = (n/2)*(n+1);
	
    for(int i : arr){
        sum -= i;
    }
    return sum;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n-1, 0);
	    for(int i=0; i<n-1; i++) cin>>arr[i];
	   
	    int  missing_num = find_missing_number(arr, n);
	    cout<<missing_num<<endl;
	}
	return 0;
}
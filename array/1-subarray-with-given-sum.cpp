#include<bits/stdc++.h>
using namespace std;


vector<int> find_low_high_idx(vector<long long> arr, long long n, long long sum){
    
    long long s = 0;
    int k = 0;
    vector<int> indexes(2, -1);
    for(int i =0; i<n; i++){
        s += arr[i];
        while(s > sum){
            s -= arr[k];
            k++;
        }
        
        if(s == sum){
            indexes = {k+1, i+1};
            break;
        }
    }
    
    return indexes;
}


int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long long n, sum;
	    cin>>n>>sum;
	    vector<long long> arr(n,0);
	    for(int i =0; i<n; i++){
	        cin>>arr[i];
	    }
	    
		
		//checking input array
		// cout<<endl;
		// cout<<"checking input array\n";
		// for(auto i : arr){
		// 	cout<<i<<" ";
		// }cout<<endl;

	    vector<int> idxes = find_low_high_idx(arr, n, sum);
	    int low_idx = idxes[0];
	    int high_idx = idxes[1];
	    if(low_idx == -1){
	        cout<<-1<<endl;
	        continue;
	    }
	    cout<<low_idx<<" "<<high_idx<<endl;
	}
	return 0;
}
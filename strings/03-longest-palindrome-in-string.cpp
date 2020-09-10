#include<bits/stdc++.h>
using namespace std;

string longest_palindrome(const string& s){
	int n = s.size();
	int low = 0, high = 0, max_len = 1;
	vector<vector<bool>> dp(n, vector<bool>(n, false));

	// fill diagonal -> true 
	for(int i = 0; i<n; i++) dp[i][i] = true;

	// using diagonal elements, fill all cells having substring size = 2 
	for(int i= 0; i<n-1; i++){
		if(s[i] == s[i+1]){
			dp[i][i+1] = true;
			if(max_len < 2){
				max_len = 2;
				low = i;
				high = i+1;
			}
		}
			
	}

	// using substr(i, j) = (s[i] == s[j] && dp[i+1][j-1] == 1)
	int k = 1;
	for(int i= 0; i<n-2; i++){
		k += 1;
		for(int j = 0; (j+k)<n; j++)
			if(s[j] == s[j+k] && dp[j+1][j+k-1]){
				// cout<<"debug i and j "<<j<<" "<<j+k<<endl;
				dp[j][j+k] = true;

				if(max_len < k+1){
					max_len = k+1;
					low = j; 
					high = j+k;
				}
			}
	}



	return s.substr(low, high-low+1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		string ans = longest_palindrome(s);
		cout<<ans;

		cout<<endl;
	}
	return 0;
}
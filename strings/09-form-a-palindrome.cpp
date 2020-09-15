#include<bits/stdc++.h>
using namespace std;

int LCS(string& a, string& b){
	int n = a.size();
	vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

	for(int i=1; i<n+1; i++){
		for(int j = 1; j < n+1; j++){
			if(a[i-1] == b[j-1])
				dp[i][j] = 1+dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}

	return dp[n][n];
}

int minimum_chars_required(string& s){
	
	string rev_s = s;
	reverse(rev_s.begin(), rev_s.end());

	int lcs = LCS(s, rev_s);

	return s.size() - lcs;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
    	cin>>s;
		int ans = minimum_chars_required(s);
		cout<<ans;

		cout<<endl;
	}
}
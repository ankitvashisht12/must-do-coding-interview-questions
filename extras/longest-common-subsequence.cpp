#include<bits/stdc++.h>
using namespace std;

int lcs(const string& a, const string& b){
	int a_size = a.size();
	int b_size = b.size();

	vector<vector<int>> dp(a_size+1, vector<int>(b_size+1));

	for(int i = 1; i<a_size+1; i++){
		for(int j = 1; j <b_size+1; j++){
			if(a[i-1] == b[j-1]) dp[i][j]= 1 + dp[i-1][j-1];
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}

	return dp[a_size][b_size];

}

int main(){
	string a, b;
	cin>>a>>b;

	int ans = lcs(a,b);
	cout<<ans<<endl;
}
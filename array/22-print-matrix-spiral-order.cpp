
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void print_matrix_spirally(const vector<vector<int>>& mat, int n, int m){
	int k = 0, l = 0;
	

	int i;

	while(k < n && l < m){
		for(i = k; i < m; i++)
			cout<<mat[k][i]<<" ";
		
		k++;

		for(i = k; i < n; i++)
			cout<<mat[i][m-1]<<" ";
		m--;

		if(k < n){
			for(i = m-1; i>=l; i--)
			cout<<mat[n-1][i]<<" ";
			n--;
		}
		
		if(l < m){
			for(i = n-1; i >=k; i--)
			cout<<mat[i][l]<<" ";
			l++;
		}
		
	}

}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; 
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		
		vector<vector<int>> mat(n,vector<int>(m));

		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++)
				cin>>mat[i][j];
		}


		print_matrix_spirally(mat, n, m);
		
		cout<<endl;
	}
	return 0;
}
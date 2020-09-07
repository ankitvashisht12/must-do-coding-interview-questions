
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int last_index_of_1(const string &X, int n){
	for(int i = n-1; i>=0; i--){
		if(X[i] == '1')
			return i;
	}

	return -1;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; 
	cin>>t;
	while(t--){
		string S;
		cin>>S;
		

		cout<<last_index_of_1(S, S.size());
		
		cout<<endl;
	}
	return 0;
}
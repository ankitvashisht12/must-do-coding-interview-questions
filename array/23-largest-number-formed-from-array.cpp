
#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool compare(string s1, string s2){
	return (stoi(s1+s2)> stoi(s2+s1));
}

void print_largest_number(vector<string>& X, int n){
	sort(X.begin(), X.end(), compare);

	for(auto x : X)
		cout<<x;
}
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<string> X;

		for(int i=0; i<n; i++){
			string temp;
			cin>>temp;
			X.push_back(temp);
		}

	    print_largest_number(X, n);		
		
		cout<<endl;
	}
	return 0;
}
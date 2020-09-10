// Not yet complete

#include<bits/stdc++.h>

using namespace std;

void print_all_permutations(const string& s, string res, int i){
	if(res.size() == s.size()){
		cout<<res<<" ";
		return ;
	}
	
	if(i >= s.size()) return ;

	print_all_permutations(s, res, i+1);
	print_all_permutations(s, res+s[i],  i+1);
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string res = "";
		print_all_permutations(s, res, 0);
		cout<<endl;
	}
	return 0;
}
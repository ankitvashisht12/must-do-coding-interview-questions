#include<bits/stdc++.h>
using namespace std;


string is_anagram(string& a, string& b){
	int a_size  = a.size();
	int b_size = b.size();

	if(a_size != b_size)
		return "NO";

	map<char, int> m;
	for(char c : a)
		m[c]++;

	for(char c : b){
		if(m[c] == 0)
			return "NO";

		m[c]--;
	}

	for(auto p : m)
		if(p.second != 0)
			return "NO";

	return "YES";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;

		cout<<is_anagram(a, b);
		cout<<endl;
	}	
}
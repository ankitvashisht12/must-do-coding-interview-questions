#include<bits/stdc++.h>
using namespace std;


string remove_dups(const string& s){
	string ans = "";

	map<char,int> m;
	for(auto c : s)
		m[c]++;

	for(auto c : s){
		if(m[c] == -1) continue;

		else if(m[c] >= 2){
			m[c] = -1;
			ans += c;
		}else{
			ans += c;
		}
	}

	return ans;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		
    	getline(cin, s);
	
		string ans = remove_dups(s);
		cout<<ans;

		cout<<endl;
	}
}
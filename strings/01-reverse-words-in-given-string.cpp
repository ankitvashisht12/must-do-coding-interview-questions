#include<bits/stdc++.h>

using namespace std;

// O(N) space
// string reverse_words(string& s){
// 	int n = s.size();
// 	if(n == 1) return s;

// 	string ans = "";
// 	vector<pair<int, int>> indices;
// 	int a = 0, i = 1;
// 	for(; i<n; i++){
// 		if(s[i] == '.'){
// 			indices.push_back({a, i-1});
// 			if(i+1 <= n-1)
// 				a = i+1;
// 		}
// 	}
// 	indices.push_back({a, i-1});
// 	for(auto it = indices.rbegin();  it != indices.rend(); it++){
		
// 		ans += s.substr(it->first, it->second - it->first + 1);
// 		ans += ".";
// 	}
// 	ans.pop_back();	
// 	return ans;
// }


// Optimised Sol
string reverse_words(string& s){
	int n = s.size();
	if(n == 1) return s;

	string ans = "";
	string word;
	vector<pair<int, int>> indices;
	int a = 0, i = 1;
	for(; i<n; i++){
		if(s[i] == '.'){
			word = s.substr(a, i-a);
			if(ans.size() == 0)
				ans += word;
			else
				ans = word + '.' + ans;
			if(i+1 <= n-1)
				a = i+1;
		}
	}

	word = s.substr(a, i-a);
	if(ans.size() == 0)
		ans += word;
	else
		ans = word + '.' + ans;
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		string ans = reverse_words(s);
		cout<<ans;

		cout<<endl;
	}
	return 0;
}
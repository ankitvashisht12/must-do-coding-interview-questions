#include<bits/stdc++.h>
using namespace std;


string remove_duplicates(string s){
	string ans ="";
	int n = s.size();

	if(n <= 1) return s;

	if(s[0] != s[1])
		ans += s[0];

	for(int i = 2; i<n; i++){
		if(s[i] != s[i-1] && s[i-2] != s[i-1])
			ans += s[i-1];
	}

	if(s[n-1] != s[n-2])
		ans += s[n-1];

	if(ans.size() == n)
		return ans;
	else
		return remove_duplicates(ans);
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		string ans = remove_duplicates(s);
		cout<<ans;

		cout<<endl;
	}
	return 0;
}
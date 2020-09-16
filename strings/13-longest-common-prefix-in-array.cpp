#include<bits/stdc++.h>
using namespace std;

string longest_common_prefix(vector<string>& v, int n, int max_size){
	string ans = "";
	int k;
	for(int i = 0; i<max_size; i++){
		char ch = v[0][i];
		k = i;
		
		for(int j = 1; j < n; j++){
		
			
			if(ch != v[j][k]){
				if(ans.size() == 0)
					return "-1";
				else return ans;
			}


		}
		ans += ch;

	
	}

	return ans;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v;
		
		int max_size = 0;
		for(int i=0; i<n; i++){
			string s;
			cin>>s;
			int len = s.size();
			max_size = max(max_size, len);
			v.push_back(s);
		}
		
		string ans = longest_common_prefix(v, n, max_size);
		cout<<ans;
		cout<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;


int longest_distinct_char_substr(string s){

	int k = 0;
	int ans = 1;
	set<int> st;

	for(int i =0 ; i < s.size(); i++){
		if(st.count(s[i]) == 0){
			st.insert(s[i]);
			ans = max(ans, i-k+1);
		}else{
			while (st.count(s[i])){
				st.erase(s[k]);
				k++;
			}	
			st.insert(s[i]);
			
		}
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
    	int ans = longest_distinct_char_substr(s);
		cout<<ans;

		cout<<endl;
	}
}
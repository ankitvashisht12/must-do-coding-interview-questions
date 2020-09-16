#include<bits/stdc++.h>
using namespace std;

int ATOI(string s){
	int ans = 0;
	int n = s.size();
	bool neg = false;
	


	for(int i =0; i<s.size(); i++){
		char c = s[i];

		if( i == 0  && c == '-'){
			neg = true;
			n--;
			continue;
		}

		if(isdigit(c) == 0)
			return -1;
		n--;
		ans += (c - 48) * pow(10, n);	
	}

	if(neg)
		ans = -1*ans;

	return ans;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans = ATOI(s);
		cout<<ans;
		cout<<endl;
	}
	return 0;
}
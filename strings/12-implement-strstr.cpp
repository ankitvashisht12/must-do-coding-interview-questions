#include<bits/stdc++.h>
using namespace std;

// GeeksforGeeks
// for

int STRSTR(string s, string x){
	int k;
	int x_size = x.size();
	for(int i =0; i < s.size(); i++){
		k = i;
		for(int j = 0; j < x.size(); j++){
			if(s[k] != x[j])
				break;
			
			k++;
			x_size--;
		}

		if(x_size == 0)
			return k-x.size();
		else 
			x_size = x.size();
		
	}

	return -1;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		string s,x;
		cin>>s>>x;
		int ans = STRSTR(s, x);
		cout<<ans;
		cout<<endl;
	}
	return 0;
}
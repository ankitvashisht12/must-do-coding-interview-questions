#include<bits/stdc++.h>
using namespace std;

int roman_to_int(const string& s){
	map<char, int> _m;
	int ans = 0;
	_m['I'] = 1;
	_m['V'] = 5;
	_m['X'] = 10;
	_m['L'] = 50;
	_m['C'] = 100;
	_m['D'] = 500;
	_m['M'] = 1000;

	int n = s.size();

	if(n == 1)
		ans += _m[s[0]];

	int j ;
	for(int i = 1; i<n; i++){
		if(_m[s[i]] > _m[s[i-1]]){
			ans += _m[s[i]] - _m[s[i-1]];
			
			i++;
		}
		else{
			ans += _m[s[i-1]];
		
		}

		j = i-1;
			
	}

	if(j == n-2){
		ans += _m[s[n-1]];
	}

	return ans;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;


		transform(a.begin(), a.end(), a.begin(), ::toupper);


		int val = roman_to_int(a);
		cout<<val;
		cout<<endl;
	}
	return 0;
}
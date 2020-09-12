#include<bits/stdc++.h>
using namespace std;

bool check_if_rotated(const string& a, const string& b){
	int size_a = a.size();
	int size_b = b.size();

	if(size_a != size_b)
		return false;

	bool cond1 = true, cond2 = true;
	int i = 0;
	int j = 2;

	while(j < size_b){
		if(a[i] != b[j]){
			cond1 = false;
			break;
		}
		i++;
		j++;
	}

	j = 0;
	while(i < size_a){
		if(a[i] != b[j]){
			cond1 =false;
			break;
		}
		i++;
		j++;
	}
		

	// cond 2 

	i = 0;
	j = size_b-2;

	while(j < size_b){
		if(a[i] != b[j]){
			cond2 = false;
			break;
		}
		i++; 
		j++;
	}

	j = 0;
	while(i < size_a){
		if(a[i] != b[j]){
			cond2 = false;
			break;
		}
		i++;
		j++;
	}

	if(cond2 || cond1)
		return true;

	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		
		bool is_rotated = check_if_rotated(a, b);
		if(is_rotated)
			cout<<1;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}
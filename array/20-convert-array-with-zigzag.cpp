
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void convert_into_zigzag(vector<ll> &X, int n)
{
	if(n == 1) return;


	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if(i == 0){
				//right side check
				if (X[i] > X[i + 1])
				{
					ll temp = X[i];
					X[i] = X[i + 1];
					X[i + 1] = temp;
				}

			}else if(i == n-1){
				// left side check
				if (X[i-1] < X[i])
				{
					ll temp = X[i];
					X[i] = X[i - 1];
					X[i - 1] = temp;
				}
			}else{
				// right & left both
				if (X[i-1] < X[i])
				{
					ll temp = X[i];
					X[i] = X[i - 1];
					X[i - 1] = temp;
				}


				if (X[i] > X[i + 1])
				{
					ll temp = X[i];
					X[i] = X[i + 1];
					X[i + 1] = temp;
				}
				
			}
			
		}
	}
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll> X(n, 0);
		for (int i = 0; i < n; i++)
			cin >> X[i];

		convert_into_zigzag(X, n);

		for(auto x : X)
			cout<<x<<" ";

		cout << endl;
	}
	return 0;
}
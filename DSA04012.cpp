#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int m, n;
		cin >> m >> n;
		int P[m], Q[n];
		int R[m+n-1] = {0};

		for(int i = 0; i < m; i++)
			cin >> P[i];
		for(int i = 0 ; i < n; i++)
			cin >> Q[i];

		for(int i = 0 ; i < m ; i++)
			for(int j = 0 ; j < n ; j++)
				R[i+j] += P[i] * Q[j];

		for(int i = 0 ; i < m+n-1 ; i++)
			cout << R[i] << " ";
		cout << endl;
	}
	return 0;
}

//done
// Convert Gray to Binary

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string g, b;
		cin >> g;
		b = g[0];
		for(int i = 0 ; i < g.size()-1 ; i++)
		{
			if(b[i] == g[i+1])
				b = b + "0";
			else
				b = b + "1";
		}
	
		cout << b ;
		cout << endl;
	}
	return 0;
}

// done

// dem so 0

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		
		int a, count = 0;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> a;
			if(a == 0)
				count++;
		}
		cout << count;
		cout << endl;
	}
	return 0;
}

//done

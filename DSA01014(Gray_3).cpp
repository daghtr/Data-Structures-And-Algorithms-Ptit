// Convert Binary to Gray

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string b;
		cin >> b;
		for(int i = 0 ; i < b.length() ; i++)			//b.length() == b.size()
		{
			if(i == 0)	
				cout << b[i];
			else
			{
				if(b[i] != b[i-1]) 
					cout << "1";
				else
					cout << "0";
			}
		}
		
		cout << endl;
	}
	return 0;
}

// done

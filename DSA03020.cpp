#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		vector<int> a;
		int b = 0;
		for(int i = 0 ; s[i] ; i++)
		{
			if(s[i] == '[')
				a.push_back(i);
		}
		
		int c = 0, count = 0;
		for(int i = 0 ; s[i] ; i++){
			if(s[i] == '[')
			{
				b++;
				c++;
			}
			else
				b--;
				
				
			if(b < 0)
			{
				count += a[c] - i;
				swap(s[a[c]], s[i]);
				c++;
				b = 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}

//done

#include<bits/stdc++.h>
using namespace std;

string s;
int n, k;
int i, stop = 0;

void sinh()
{
	i = s.size()-1;
	while(s[i] == 'B')
	{
		s[i] = 'A';
		i--;
	}
	
	if(i < 0)
		stop = 1;
	else
		s[i] = 'B';
}

bool ok()
{
	int count = 0;
	for(int i = 0 ; i <= n-k ; i++)
	{
		bool t = true;
		for(int j = i ; j < i+k ; j++)
			if(s[j] == 'B')
			{
				t = false;
				break;
			}
			
			if(t)
				count++;
	}
	
	return count == 1;
}
int main()
{
	int count = 0;
	cin >> n >> k;
	s = "";
	stop = 0;
	vector<string> a;
	for(int i = 0 ; i < n ; i++)
		s += "A";
	while(!stop)
	{
		if(ok())
		{
			a.push_back(s);
			count++;
		}
		sinh();
	}
	cout << count << endl;
	for(int i = 0 ; i < count ; i++)
		cout << a[i] << endl;
	return 0;
}

//done

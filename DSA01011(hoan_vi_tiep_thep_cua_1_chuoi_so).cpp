#include<bits/stdc++.h>
using namespace std;

string s;
void hoan_vi_next(int n, string s)
{
	int i = n-2;
	while(i > 0  && s[i] >= s[i+1])
		i--;
		
	if(i > 0)
	{
		int m = n-1;
		while(s[i] >= s[m])
			m--;
		
		swap(s[i] , s[m]);
		
		int a = i+1, b = n-1;
		
		while(a <= b)
		{
			swap(s[a], s[b]);
			a++;
			b--;
		}
		
		cout << s;
		
	}
	
	else
		cout << "BIGGEST";
		cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int c;
		cin >> c >> s ;
		cout << c << " ";
		hoan_vi_next(s.length(), s);
	}
	return 0;
}

// done

#include<bits/stdc++.h>
using namespace std;

void tich_np()
{
	string s1, s2;
	cin >> s1 >> s2;
	long long a=0, b=0, c=1;
	
	for(int i = s1.length()-1, j = 0 ; i >= 0, j < s1.length() ; i--, j++)
	{
		a += int (s1[i] - '0') * c;
		c *= 2;
	}
	c = 1;
	for(int i = s2.length()-1, j = 0 ; i >= 0, j < s2.length() ; i--, j++)
	{
		b += int (s2[i] - '0') * c;
		c *= 2;
	}
	
	cout << a*b << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		tich_np();
	}
	
	
	return 0;
}

//done

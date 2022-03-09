#include<bits/stdc++.h>
using namespace std;

int *bt(string s)
{
	int p = 1;
	int *ans = new int [s.size()+1];
	s += 'I';
	for(int i = 0 ; s[i] ; i++)
	{
		if(s[i] == 'I')
        {
			ans[i] = p++;
			for(int j = i-1 ; s[j] == 'D' ; j--)
				ans[j] = p++;
		}
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		string s;
		cin >> s;
		int *ans = bt(s);
		for(int i = 0 ; i <= s.size() ; i++)
			cout << ans[i];
		cout << endl;
	}
	return 0;
}

//done
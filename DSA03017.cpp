#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int k;
		string s;
		cin >> k >> s;
		int a[26];
		memset(a, 0, sizeof a);

		for(int i = 0 ; s[i] ; i++)
			a[s[i]-'A']++;

		priority_queue<int> q;
		for(int i = 0 ; i < 26 ; i++)
			if(a[i] > 0)
                q.push(a[i]);

		while(k--)
        {
			int b = q.top();
			q.pop();
			q.push(b-1);
		}

		int sum = 0;
		while(!q.empty())
		{
			sum += q.top() * q.top();
			q.pop();
		}
		cout << sum << endl;
	}
	return 0;
}

//done
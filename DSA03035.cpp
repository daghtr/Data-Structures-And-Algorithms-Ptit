#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	a.resize(n);
	vector<int> b;

	for (int i = 0 ; i < n ; i++)
        cin>>a[i];

	vector<int> c;
	c.clear();
	int token;
	vector<int>::iterator k;       // vong lap cua vector
	int m=1;
	int count = 0;
	while (!a.empty())
	{
	    k = find(b.begin(), b.end(), a.back()+1);
	    if (k != b.end())
	    {
	        b[k - b.begin()]--;
	        c[k - b.begin()]++;
	        count = c[k - b.begin()];
	        m = max(m, count);
	    }
	    else
	    {
	        c.push_back(1);
	        b.push_back(a.back());
	    }
	    a.pop_back();
	}
	cout << n-m;
    return 0;
}

//chua sub
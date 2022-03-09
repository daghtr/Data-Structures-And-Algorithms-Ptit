#include<bits/stdc++.h>
using namespace std;

int n, k, c[100][100];
int check = 0;
int a[50];

void solve()
{
	int i;
	i = n - 1;
	while(a[i] > a[i+1])
		i--;

	if(i <= 0)
		check = 1;

	else
    {
		int m = n;
		while(a[m] < a[i])
			m--;

		swap(a[i], a[m]);
		i++;
		m = n;

		while(i <= m)
        {
			swap(a[i], a[m]);
			i++;
            m--;
		}
	}
}

int dem()
{
	int res = 0;
	for(int j = 1 ; j <= n ; j++)
		res += c[j][a[j]];

	return res;
}

int main()
{
	int count = 0;
	cin >> n >> k;
	vector<vector<int> > res;
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j<= n ; j++)
			cin >> c[i][j];

	check = 0;
	for(int i = 1 ; i <= n ; i++)
        a[i] = i;

	while(!check)
    {
		if(dem() == k)
        {
			res.resize(res.size()+1);
			for(int j = 1 ; j <= n ; j++)
				res[count].push_back(a[j]);
			count++;
		}
		solve();
	}
	cout << count << endl;
	for(int i = 0; i < res.size(); i++)
	{
		for(int j = 0 ; j < res[i].size() ; j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}

//done

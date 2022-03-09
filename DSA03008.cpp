#include<bits/stdc++.h>
using namespace std;

struct work
{
	int S;
	int F;
};

bool cmp(work a, work b)
{
	return a.F < b.F;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n;
		cin >> n;
		work a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i].S;
		for(int i = 0 ; i < n ; i++)
			cin >> a[i].F;

		sort(a, a+n, cmp);
		int j = 0;
		int count = 1;
		for(int i = 1  ;  i < n ; i++)
        {
			if(a[i].S >= a[j].F)
            {
				j = i;
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

//done

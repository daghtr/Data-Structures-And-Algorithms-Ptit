#include<bits/stdc++.h>
using namespace std;

struct work
{
	int D;      // tgian ket thuc cong viec
	int P;      // loi nhuan
};

bool cmp(work a, work b)
{
	if(a.P != b.P)
        return (a.P > b.P);
	return (a.D < b.D);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n, n1 = 0, sum = 0;       // n : so luong job
                                        // n1 : so luong cong viec tuong ung
                                        // sum : loi nhuan lon nhat
		cin >> n;
		work a[n];
		for(int i = 0 ;  i < n ; i++)
		{
			int x;
			cin >> x >> a[i].D >> a[i].P;
		}
		sort(a, a+n, cmp);
		bool check[n+5];
		memset(check, false, sizeof(check));
		for(int i = 0 ; i < n ; i++)
        {
			for(int j = min(n, a[i].D)-1 ; j >= 0 ; j--)
			{
				if(check[j] == false)
                {
					n1++;
					sum += a[i].P;
					check[j] = true;
					break;
				}
			}
		}
		cout << n1 << " " << sum <<endl;
	}
	return 0;
}


//done

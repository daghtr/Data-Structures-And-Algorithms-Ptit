#include <bits/stdc++.h>
using namespace std;

int dem = 0;
int n, k, sum1;

void tap_con(int a, int d, int sum2)
{
	if(sum2 > sum1)
        return;

	if(d == 0)
	{
		if (sum2 == sum1)
            dem++;
	}

	else
	{
		for(int i = a+1 ; i <= n ; i++)
		{
			tap_con(i, d - 1, sum2 + i);
		}
	}
}

int main()
{
    while(1)
    {
        cin >> n >> k >> sum1;
		if(n == 0 && k == 0 && sum1 == 0)
            break;

        dem = 0;
		tap_con(0, k, 0);
		cout << dem << endl;
    }
    return 0;
}


//done

#include<bits/stdc++.h>
using namespace std;


bool a[100], b[100], c[100];

// b la duong cheo xuoi
// c la duong cheo nguoc

int d[100][100]; // mag danh dau
int n = 8, sum = 0, m = 0;

void sap_xep_quan_hau(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		// neu cac hang , cot va cac duong cheo xuoi va nguoc chua co quan hau nao duoc dat vao
		if(!a[j]  &&  !b[i-j+n]  &&  !c[i+j-1])
		{
			// sau do dat vao cac vi tri va danh dau cac vi tri nay da duoc dat vao
			// de den luc tim quan hau tiep theo se k dat vao day nua
			a[j] = b[i-j+n] = c[i+j-1] = true;
			m += d[i][j];

			if(i == n)	// neu dat du cac quan hau vao thi tang them duoc 1 cach
				sum = max(sum, m);

			else
				sap_xep_quan_hau(i+1);		// neu i chua =n thi phai tim den khi dat du n quan hau

			a[j] = b[i-j+n] = c[i+j-1] = false;		// cac vi tri nay chua duoc dat quan hau vao
            m -= d[i][j];
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
                cin >> d[i][j];
        }
		sap_xep_quan_hau(1);
		cout << sum;
		cout << endl;

	}
	return 0;
}

//false

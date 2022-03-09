#include<bits/stdc++.h>
using namespace std;


bool h[100], c[100], xuoi[100], nguoc[100];		//bool <=> int
// h, c la hang va cot dc la danh dau
// xuoi la duong cheo xuoi
// nguoc la duong cheo nguoc

int n, dem;

void sort_queen(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		// neu cac hang , cot va cac duong cheo xuoi va nguoc chua co quan hau nao duoc dat vao
		if(!h[j]  &&  !c[j]  &&  !xuoi[i-j+n]  &&  !nguoc[i+j-1])
		{
			// sau do dat vao cac vi tri va danh dau cac vi tri nay da duoc dat vao
			// de den luc tim quan hau tiep theo se k dat vao day nua
			h[j] = true;
			c[j] = true;
			nguoc[i+j-1] = true;
			xuoi[i-j+n] = true;
			
			// thi 
			if(i == n)	// neu dat du cac quan hau vao thi tang them duoc 1 cach 
				dem++;	
			else
				sort_queen(i+1);		// neu i chua =n thi phai tim den khi dat du n quan hau 

			h[j] = false;	
			c[j] = false;
			nguoc[i+j-1] = false;
			xuoi[i-j+n] = false;
					// cac vi tri nay chua duoc dat quan hau vao
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		dem = 0;
		cin >> n;
		sort_queen(1);
		cout << dem;
		cout << endl;
		
	}
	return 0;
}

// done

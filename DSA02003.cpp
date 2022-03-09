#include<bits/stdc++.h>
using namespace std;


int n;
int a[100][100];	
vector<string> b;
bool check = false;

void nhap()
{
	cin >> n;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
			cin >> a[i][j];
	}
	b.clear();			// cac phan tu dua vao vector de xoa sau do de sap xep
	check = false;
}

void run(int i, int j, string s)
{
	if(i == 1  &&  j == 1  && a[i][j] == 0)		// kiem tra o dau tien
	{
		check = false;
		return ;
	}
	
	if(i == n  &&  j == n  &&  a[n][n])		// o cuoi cung
	{
		b.push_back(s);
		check = true;
		return ;
	}
	
	if(i < n  &&  a[i+1][j])		// di sang phai
		run(i+1, j, s + "D");
	if(j < n  &&  a[i][j+1])
		run(i, j+1, s + "R");		// di xuong duoi
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		nhap();
		run(1,1,"");
		if(check)
		{
			sort(b.begin(), b.end());
			for(int i = 0 ; i < b.size() ; i++)
				cout << b[i] <<" ";
		}
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}

//done

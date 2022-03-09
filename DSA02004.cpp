#include<bits/stdc++.h>
using namespace std;


int n;
int a[100][100];
vector<string> b;
bool check[100][100];


void run(int i, int j, string s)
{
	if(a[1][1] == 0  ||  a[n][n] == 0)
        return;

    if(i == n && j == n)
        b.push_back(s);

    if(a[i+1][j] == 1  &&  i != n  &&  !check[i+1][j])
    {
        check[i][j] = true;
        run(i+1, j, s + "D");
        check[i][j] = false;
    }

    if(a[i][j+1] == 1  &&  j != n  &&  !check[i][j+1])
    {
        check[i][j] = true;
        run(i, j+1, s + "R");
        check[i][j] = false;
    }

    if(a[i-1][j] == 1  &&  i != 1  &&  !check[i-1][j])
    {
        check[i][j] = true;
        run(i-1, j, s + "U");
        check[i][j] = false;
    }

    if(a[i][j-1] == 1  &&  j != 1  &&  !check[i][j-1])
    {
        check[i][j] = true;
        run(i, j-1, s + "L");
        check[i][j] = false;
    }
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		b.clear();
		cin >> n;
		for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                cin >> a[i][j];
            }
        }
        run(1, 1, "");

        if(b.size() == 0)
            cout << "-1";
        else
        {
            sort(b.begin(), b.end());
            for(int i = 0 ; i < b.size() ; i++)
                cout << b[i] << " ";
        }
        cout << endl;
	}
	return 0;
}

//done

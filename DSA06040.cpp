#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m], c[k];

		for(int i = 0 ; i < n ; i++)
            cin >> a[i];
		for(int i = 0 ; i < m ; i++)
            cin >> b[i];
		for(int i = 0 ; i < k ; i++)
            cin >> c[i];

		int i = 0, j = 0, p = 0;
		bool check = false;
        while (i < n && j < m && p < k)
        {
            if (a[i] == b[j] && b[j] == c[p])
            {
                check = true;
            	cout << a[i] << " ";
            	//check = true;  deu dung(true)
                i++;
                j++;
                p++;
            }
            else if (a[i] < b[j])
                i++;
            else if (b[j] < c[p])
                j++;
            else
                p++;
		}
		if(check == false)
            cout << "-1" << endl;
        cout << endl;
	}
	return 0;
}

//done

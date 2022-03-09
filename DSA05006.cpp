#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		
		for(int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
			b[i] = a[i];		// cho mang b = a de xet day con
		}
			
		// tinh tu duoi len cac day con									//VD 1 2 3 5
		for(int i = 1 ; i < n ; i++)									//1
		{																//1 2
			for(int j = 0 ; j < i ; j++)								//1 3
			{															//1 5
				if(a[i] > a[j]  &&  b[i] < b[j] + a[i])					//.....
					b[i] = b[j] + a[i];
			}
		}
		
		// gan vao gia tri r in ra kq
		int  max = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(max < b[i])
				max = b[i];
		}
		
		cout << max;
		cout << endl;
	}
	return 0;
}


// done

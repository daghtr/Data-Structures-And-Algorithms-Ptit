#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int min_1 = 0, max_1 = 0, min_2 = 0, max_2 = 0, vol;
	
	vol = 1;
	while(a)
	{
		int k = a % 10;
		if(k == 5)
			max_1 = max_1 + (vol * 6);
		else
			max_1 = max_1 + (vol * k);
			
		if(k == 6)
			min_1 = min_1 + (vol * 5);
		else
			min_1 = min_1 + (vol * k);
		
		vol = vol * 10;
		a /= 10;
	}
	
	vol = 1;
	while(b)
	{
		int k = b % 10;
		if(k == 5)
			max_2 = max_2 + (vol * 6);
		else
			max_2 = max_2 + (vol * k);
			
		if(k == 6)
			min_2 = min_2 + (vol * 5);
		else
			min_2 = min_2 + (vol * k);
		
		vol = vol * 10;
		b /= 10;
	}
	
	cout << min_1 + min_2 << " " << max_1 + max_2;
	
	
	return 0;
}

//done
